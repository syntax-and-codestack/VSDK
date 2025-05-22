//BoundingBox.hpp

#ifndef __BOUNDING_BOX_HPP__
#define __BOUNDING_BOX_HPP__

#include "Plane.hpp"

class BoundingBox{
public:
        BoundingBox();
        ~BoundingBox();

        void ConstructBoundingBox(BoundingBox& box, vec3_t mins, vec3_t maxs, vec3_t origin);

};

  

#endif
