//Plane.hpp

/*
MIT License

Copyright (c) 2025 Mangoz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef PLANE_HPP
#define PLANE_HPP

#include <string>
#include "MathSdk.h"

using PlaneVector = vec3_t;

namespace PlaneSDKModule
{

class Plane{
public:
   Plane(vec3_t _normals, vec3_t _dist) : Dist(_dist), Normal(_normals){};
   virtual ~Plane();

   PlaneVector Dist;
   PlaneVector Normal;

   int Point( int * i );

   virtual void PlaneSetNormalZero(Plane& plane, PlaneVector NZ = 0.0f){
            for( int i, i >= 0; i++ ){
                 plane.Normal = NZ;
            }  
   } = 0;

   virtual void PlaneShader(Plane& plane, const std::string& ShaderName, bool bDetail) = 0;
   virtual void PlaneConsturct(Plane& plane, PlaneVector x, y, z, PlaneVector d) = 0;
}

}

#endif
