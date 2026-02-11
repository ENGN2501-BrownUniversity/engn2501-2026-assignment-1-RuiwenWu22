//------------------------------------------------------------------------
//  Copyright (C) Gabriel Taubin
//  Time-stamp: <2026-01-26 17:42:17 taubin>
//------------------------------------------------------------------------
//
// SaverStl.cpp
//
// Written by: <Ruiwen Wu>
//
// Software developed for the course
// Digital Geometry Processing
// Copyright (c) 2026, Gabriel Taubin
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the Brown University nor the
//       names of its contributors may be used to endorse or promote products
//       derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL GABRIEL TAUBIN BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "SaverStl.hpp"

#include "wrl/Shape.hpp"
#include "wrl/Appearance.hpp"
#include "wrl/Material.hpp"
#include "wrl/IndexedFaceSet.hpp"

#include "core/Faces.hpp"

const char* SaverStl::_ext = "stl";

//////////////////////////////////////////////////////////////////////
bool SaverStl::save(const char* filename, SceneGraph& wrl) const {
    bool success = false;
    if(filename!=(char*)0) {
      

    // Check these conditions

    // 1) the SceneGraph should have a single child
        if (wrl.getNumberOfChildren() != 1){
            return false;
        }
    // 2) the child should be a Shape node
        Node* child = (Node*)(wrl.getChildren()[0]);
        Shape* shape = dynamic_cast<Shape*>(child);
        if (shape==nullptr){
            return false;
        }
    // 3) the geometry of the Shape node should be an IndexedFaceSet node
    // - construct an instance of the Faces class from the IndexedFaceSet
    // - remember to delete it when you are done with it (if necessary)
    //   before returning
        Node* geom = shape->getGeometry();
        IndexedFaceSet* ifs = dynamic_cast<IndexedFaceSet*>(geom);
        if (ifs==nullptr){
            return false;
        }
        int i = ifs->getNumberOfCoord();
        const std::vector<int>& j = ifs->getCoordIndex();
        Faces* faces = new Faces(i, j);

    // 4) the IndexedFaceSet should be a triangle mesh
        if (ifs->isTriangleMesh() == false){
            delete faces;
            return false;
        }
        
    // 5) the IndexedFaceSet should have normals per face
    // if (all the conditions are satisfied)
        IndexedFaceSet::Binding normal = ifs->getNormalBinding();
        if (!(normal == IndexedFaceSet::PB_PER_FACE || normal == IndexedFaceSet::PB_PER_FACE_INDEXED)){
            delete faces;
            return false;
        }
        if(ifs->getNormal().empty()){
            delete faces;
            return false;
        }
        
        
        // for PB_PER_FACE_INDEXED (only used when PB_PER_FACE_INDEXED is set)
        const int nF = faces->getNumberOfFaces();
        std::vector<int> faceNormalIndex;
        if(normal==IndexedFaceSet::PB_PER_FACE_INDEXED) {
            faceNormalIndex.assign(nF, -1);
            const std::vector<int>& NI = ifs->getNormalIndex();
            int f = 0;
            int p = 0;
            while(f < nF && p < (int)NI.size()) {
                while(p < (int)NI.size() && NI[p]==-1){
                    p++;
                }
                if(p >= (int)NI.size()){
                    break;
                }
                int ni = NI[p]; // get the forst normal index of this face
                faceNormalIndex[f] = ni;
                while(p < (int)NI.size() && NI[p]!=-1){
                    p++;
                }
            f++;
            }

            //to check whether each face has a normal index
            //if not, return false
            for(int i=0;i<nF;i++) {
                if(faceNormalIndex[i] < 0) {
                    delete faces;
                    return false;
                }
            }
        }


      FILE* fp = fopen(filename,"w");
      if(fp!=(FILE*)0) {

      // if set, use ifs->getName()
      // otherwise use filename,
      // but first remove directory and extension
          std::string name = filename;
          if(!ifs->getName().empty()) {
            name = ifs->getName();
          } else {
              // remove directory
              size_t pos = name.find_last_of("/\\");
              if(pos != std::string::npos){
                  name = name.substr(pos + 1);
              }
              // remove extension
              pos = name.rfind('.');
              if(pos != std::string::npos){
                  name = name.substr(0, pos);
              }
            }
          filename = name.c_str();
          fprintf(fp,"solid %s\n",filename);
          //Obtain the geometric data
          std::vector<float>& C = ifs->getCoord();
          std::vector<float>& N = ifs->getNormal();
          // TODO ...
          // for each face {
          //   ...
          // }
          for(int iF=0; iF<nF; iF++){
              //facet normal nx ny nz
              float nx=0.0f, ny=0.0f, nz=0.0f;
              //ensure each face has a normal
              if (normal == IndexedFaceSet::PB_PER_FACE){// for PB_PER_FACE
                  nx = N[3*iF + 0];
                  ny = N[3*iF + 1];
                  nz = N[3*iF + 2];
              }else{// for PER_FACE_INDEXED
                  int num = faceNormalIndex[iF];
                  nx = N[3*num + 0];
                  ny = N[3*num + 1];
                  nz = N[3*num + 2];
              }
              //output the face normal and outer loop
              //outer loop consists of  the vertices that form this surface
              fprintf(fp, "facet normal %g %g %g\n", nx, ny, nz);
              fprintf(fp, "outer loop\n");
              for(int p=0;p<3;p++){
                  int k = faces->getFaceVertex(iF,p);
                  float x = C[3*k + 0];
                  float y = C[3*k + 1];
                  float z = C[3*k + 2];
                  fprintf(fp, "vertex %g %g %g\n", x, y, z);
              }
              fprintf(fp, "endloop\n");
              fprintf(fp, "endfacet\n");
          }
          
          fprintf(fp, "endsolid\n");
          
          fclose(fp);
          success = true;
      }
        delete faces;
    // } endif (all the conditions are satisfied)
  }
    return success;
}
