#include "coordinate.hpp"

namespace r2d2 {
   namespace adt {
      coordinate::coordinate(double x, double y, double z)
      :  x{x},
         y{y},
         z{z} {
         // The initializer list is allt that is needed.
      }

      coordinate::~coordinate() {
         
      }
      
      coordinate::operator =(const coordinate & rhs) {
         x = rhs.x;
         y = rhs.y;
         z = rhs.z;
      }
   }
}
