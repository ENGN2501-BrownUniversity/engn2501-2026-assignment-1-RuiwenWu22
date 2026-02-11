//------------------------------------------------------------------------
//  Copyright (C) Gabriel Taubin
//  Time-stamp: <2026-01-26 17:42:17 taubin>
//------------------------------------------------------------------------
//
// Faces.cpp
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

#include <math.h>
#include "Faces.hpp"
  
Faces::Faces(const int nV, const vector<int>& coordIndex) {
  // TODO
    this->nV = nV;
    this->coordIndex = coordIndex;

    //ensure the last value of coordIndex should be -1
    if(!this->coordIndex.empty() && this->coordIndex.back() != -1){
        this->coordIndex.push_back(-1);
    }
    //number of corners
    const int nC = (int)this->coordIndex.size();
    //initialize elements
    cornerFace.assign(nC, -1);
    nextCorner.assign(nC, -1);
    faceFirstCorner.clear();
    faceSize.clear();
    
    int currentFace = -1;
    int startFace = -1;
    int currentSize = 0;
    int index_max = -1;
    
    for (int i = 0; i < nC; i++){
        int value = this->coordIndex[i];
        if (value >= 0){
            if (value > index_max){
                index_max = value;//find the maximum index which is the number of vertex
            }
            //if it is the first value of a new face, we need to update the information
            if (currentFace == -1){
                currentFace = (int)faceSize.size();
                startFace = i;
                currentSize = 0;
                faceFirstCorner.push_back(i);
            }
            
            cornerFace[i] = currentFace;
            currentSize = currentSize + 1;
        }
        //if it is -1 that means for a new face
        //we need to update the entire information of the previous face
        else if (value == -1){
            if (currentFace != -1){
                faceSize.push_back(currentSize);//update the size of the previous face
                //update nextCorner

                for (int k = 0; k < currentSize; k++){
                    int j = startFace+k;
                    if (k == currentSize - 1){
                        nextCorner[j] = startFace;
                    } else{
                        nextCorner[j] = j+1;
                    }
                }
                
                //reset the elements for the next face
                currentFace = -1;
                startFace = -1;
                currentSize = 0;
            }
        }
        
        if (index_max >= 0){
            if (this->nV < index_max + 1){
                this->nV = index_max + 1;
            }
        }
    }
    
}

int Faces::getNumberOfVertices() const {
  // TODO
    return this->nV;
}

int Faces::getNumberOfFaces() const {
  // TODO
    return static_cast<int>(faceSize.size());
}

int Faces::getNumberOfCorners() const {
  // TODO
    return (int)this->coordIndex.size();
}

int Faces::getFaceSize(const int iF) const {
  // TODO
    if (iF < 0){
        return 0;
    }
    if (iF >= (int)faceSize.size()){
        return 0;
    };
    return faceSize[iF];
}

int Faces::getFaceFirstCorner(const int iF) const {
  // TODO
    if (iF<0){
        return -1;
    }
    if (iF >= (int)faceFirstCorner.size()){
        return -1;
    }
    return faceFirstCorner[iF];
}

int Faces::getFaceVertex(const int iF, const int j) const {
  // TODO
    if (iF<0){
        return -1;
    }
    if (iF >= (int)faceSize.size()){
        return -1;
    }
    if (j<0){
        return -1;
    }
    if (j >= (int)faceSize[iF]){
        return -1;
    }
    const int I = faceFirstCorner[iF]+j;
    if (I<0){
        return -1;
    }
    if (I >= (int)coordIndex.size()){
        return -1;
    }
    return coordIndex[I];
}

int Faces::getCornerFace(const int iC) const {
  // TODO
    if (iC<0){
        return -1;
    }
    if (iC >= (int)cornerFace.size()){
        return -1;
    }
    return cornerFace[iC];
}

int Faces::getNextCorner(const int iC) const {
    if (iC<0){
        return -1;
    }
    if (iC >= (int)nextCorner.size()){
        return -1;
    }
    return nextCorner[iC];
}

