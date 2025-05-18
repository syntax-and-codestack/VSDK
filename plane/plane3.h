//plane3.h
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

#include <string>//*!needed for shaders!*
#include "mathsdk/math.h"

namespace Plane3Module{

class Plane3{
public:
    Plane3();
    ~Plane3();

vec3_t PlaneNormal;
float PlaneDistance = PlaneNormal / 0.5 * 2;
vec3_t PlanePosition(Plane3 * plane, vec3_t x, y, z);

virtual void ConstructPlane(Plane3 * plane, vec3_t plane3, bool bShade) = 0;
virtual void PlaneShader(Plane3 * plane, const std::string& pShader) = 0;
virtual bool ReversePlane(Plane3 * plane, int i, vec3_t x, y, z) = 0;

}

}
