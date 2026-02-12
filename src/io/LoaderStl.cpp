//------------------------------------------------------------------------
//  Copyright (C) Gabriel Taubin
//  Time-stamp: <2026-01-26 17:42:17 taubin>
//------------------------------------------------------------------------
//
// LoaderStl.cpp
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

#include <stdio.h>
#include "TokenizerFile.hpp"
#include "LoaderStl.hpp"
#include "StrException.hpp"

#include "wrl/Shape.hpp"
#include "wrl/Appearance.hpp"
#include "wrl/Material.hpp"
#include "wrl/IndexedFaceSet.hpp"

// reference
// https://en.wikipedia.org/wiki/STL_(file_format)

const char* LoaderStl::_ext = "stl";

bool LoaderStl::load(const char* filename, SceneGraph& wrl) {
  bool success = false;

  // clear the scene graph
  wrl.clear();
  wrl.setUrl("");

  FILE* fp = (FILE*)0;
  try {

    // open the file
    if(filename==(char*)0) throw new StrException("filename==null");
    fp = fopen(filename,"r");
    //fprintf(stderr, "DEBUG '%s'\n", filename);
    if(fp==(FILE*)0) throw new StrException("fp==(FILE*)0");

    // use the io/Tokenizer class to parse the input ascii file
    TokenizerFile tkn(fp);
    // first token should be "solid"
    //fprintf(stderr, "DEBUG '%s'\n", ((std::string)tkn).c_str());
    if(tkn.expecting("solid") && tkn.get()) {
        string stlName = tkn; // second token should be the solid name
        
      // TODO ...
      // create the scene graph structure :
      // 1) the SceneGraph should have a single Shape node a child
      // 2) the Shape node should have an Appearance node in its appearance field
      // 3) the Appearance node should have a Material node in its material field
      // 4) the Shape node should have an IndexedFaceSet node in its geometry node
        Shape* shape = new Shape();
        Appearance* app = new Appearance();
        Material* mat = new Material();
        IndexedFaceSet* ifs = new IndexedFaceSet();
        
        app->setMaterial(mat);//(3)
        shape->setAppearance(app);//(2)
        shape->setGeometry(ifs);//(4)
        
        //(1) to ensure the SceneGraph have a single child
        wrl.getChildren().clear();
        wrl.getChildren().push_back((Node*) shape);
        
      // from the IndexedFaceSet
      // 5) get references to the coordIndex, coord, and normal arrays
        std::vector<int>& coordIndex = ifs->getCoordIndex();
        std::vector<float>& coord = ifs->getCoord();
        std::vector<float>& normal = ifs->getNormal();
        
      // 6) set the normalPerVertex variable to false (i.e., normals per face)
        //clear the old data of variable
        coordIndex.clear();
        coord.clear();
        normal.clear();
        //set the normalPerVertex variable
        ifs->setNormalPerVertex(false);
        
      // the file should contain a list of triangles in the following format

      // facet normal ni nj nk
      //   outer loop
      //     vertex v1x v1y v1z
      //     vertex v2x v2y v2z
      //     vertex v3x v3y v3z
      //   endloop
      // endfacet

        // - run an infinite loop to parse all the faces
        // - write a private method to parse each face within the loop
        // - the method should return true if successful, and false if not
        while(true){
            // - if your method returns false
            //     throw an StrException explaining why the method failed
            float n[3];
            float v[9];
            std::string why;
            
            bool ok = parseFace(tkn, n, v, why);
            if(!ok) {
              if(why == "endsolid" || why == "end of files") {
                success = true;
                break; //sucessful termination without any error that system throw
              }
              //fprintf(stderr, "DEBUG parseFace failed, why='%s'\n", why.c_str());
              throw new StrException(why.c_str());//throw the real error and its position that error happens
            }
            // - if your method returns true
            //     update the normal, coord, and coordIndex variables
            //for normals per face
            normal.push_back(n[0]);//ni
            normal.push_back(n[1]);//nj
            normal.push_back(n[2]);//nk
                  
            //for 3 vertices
            int base = (int)(coord.size()/3);//calculate the current number of vertices
            for(int j=0; j<3; j++){
                //update the coord
                coord.push_back(v[3*j+0]);//x
                coord.push_back(v[3*j+1]);//y
                coord.push_back(v[3*j+2]);//z
                //update the coordIndex
                coordIndex.push_back(base+j);
                }
            coordIndex.push_back(-1);//end a face
        }
    }
    // close the file (this statement may not be reached)
    fclose(fp);
    
  } catch(StrException* e) { 
    
    if(fp!=(FILE*)0) fclose(fp);
    fprintf(stderr,"ERROR | %s\n",e->what());
    delete e;

  }

  return success;
}


//private method to parse faces
bool LoaderStl::parseFace(Tokenizer& tkn, float n[3], float v[9], std::string& why) const{
    //fprintf(stderr, "DEBUG s0 token='%s'\n", ((std::string)tkn).c_str());
    if(!tkn.get()){
        //fprintf(stderr, "DEBUG s1 token='%s'\n", ((std::string)tkn).c_str());
        why="end of files";//missing endsoild (system doesn't read the token, so return error)
        return false;
    }
    std::string t = (std::string)tkn;
    //fprintf(stderr, "DEBUG soildname token='%s'\n", t.c_str());
    if(t=="endsolid"){
        why="endsolid";
        return false;
    }
    
    //to check whether the first token is facet or not
    if(t!="facet"){
        why="expected facet";
        return false;
    }
    
    //read the next token (it should be normal)
    if(!tkn.get()) {
        why = "missing normal";
        return false;
    }
    //to check whether the second token is normal or not
    if(((std::string)tkn) != "normal") {
        why = "expected normal after facet";
        return false;
    }
    
    //read the next token (it should be nx)
    if(!tkn.get()){
        why="missing normal x";
        return false;
    }
    //fprintf(stderr, "DEBUG nx token='%s'\n", ((std::string)tkn).c_str());
    //to check whether the token is nx or not
    if(sscanf(((std::string)tkn).c_str(), "%f", &n[0]) != 1){
        why="expected nx after normal";
        return false;
    }
    
    //read the next token (it should be ny)
    if(!tkn.get()){
        why="missing normal y";
        return false;
    }
    //fprintf(stderr, "DEBUG ny token='%s'\n", ((std::string)tkn).c_str());
    //to check whether the token is ny or not
    if(sscanf(((std::string)tkn).c_str(), "%f", &n[1]) != 1){
        why="expected ny";
        return false;
    }

    //read the next token (it should be nz)
    if(!tkn.get()){
        why="missing normal z";
        return false;
    }
    //fprintf(stderr, "DEBUG nz token='%s'\n", ((std::string)tkn).c_str());
    //to check whether the token is nz or not
    if(sscanf(((std::string)tkn).c_str(), "%f", &n[2]) != 1){
        why="expected nz";
        return false;
    }
    
    //read the next token (it should be outer)
    if(!tkn.get()){
        why="missing outer";
        return false;
    }
    //to check whether the token is outer or not
    if(((std::string)tkn) != "outer"){
        why="expected outer";
        return false;
    }

    //read the next token (it should be loop)
    if(!tkn.get()){
        why="missing loop";
        return false;
    }
    //to check whether the token is outer or not
    if(((std::string)tkn) != "loop"){
        why="expected loop";
        return false;
    }
    
    
    // //to check 3 vertices after outer and loop
    for(int i=0;i<3;i++) {
        if(!tkn.get()){//read vertex token
            why="missing token vertex";
            return false;
        }
        if(((std::string)tkn) != "vertex"){//check this token is vertex or not
            why="expected vertex";
            return false;
        }

        if(!tkn.get()){// read vx
            why="missing vertex x";
            return false;
        }
        if(sscanf(((std::string)tkn).c_str(), "%f", &v[3*i+0]) != 1){//check this token is vx or not
            why="bad vertex x";
            return false;
        }

        if(!tkn.get()){//read vy
            why="missing vertex y";
            return false;
        }
        if(sscanf(((std::string)tkn).c_str(), "%f", &v[3*i+1]) != 1){//check this token is vy or not
            why="bad vertex y";
            return false;
        }

        if(!tkn.get()){//read vz
            why="missing vertex z";
            return false;
        }
        if(sscanf(((std::string)tkn).c_str(), "%f", &v[3*i+2]) != 1){//check this token is vz or not
            why="bad vertex z";
            return false;
        }
    }

    // for endloop
    if(!tkn.get()){
        why="missing endloop token";
        return false;
        
    }
    //fprintf(stderr, "DEBUG endloop token='%s'\n", ((std::string)tkn).c_str());
    if(((std::string)tkn) != "endloop") {
        why="expected endloop";
        return false;
    }

    //for endfacet
    if(!tkn.get()){
        why="missing endfacet token";
        return false;
    }
    //fprintf(stderr, "DEBUG endfacet token='%s'\n", ((std::string)tkn).c_str());
    if(((std::string)tkn) != "endfacet"){
        why="expected endfacet";
        return false;
    }
    
    return true;
}
