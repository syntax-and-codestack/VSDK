//Plane.hpp

#ifndef PLANE_HPP
#define PLANE_HPP

#include <string>
#include "MathSdk.h"

using PlaneVector = vec3_t;

namespace PlaneSDKModule
{

class Plane{
public:
   Plane();
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
