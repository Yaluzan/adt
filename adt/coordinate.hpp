//! @file coordinate.hpp
//! @author Matthijs Mud
//! @date March 14th, 2016
//! @version 1.0

#ifndef COORDINATE_HPP
#define COORDINATE_HPP

namespace r2d2 {
   namespace adt {
      // Forward declaration.
      class distance;
      
       //! @class coordinate
       //! @brief A location in space, specified as an offset to an arbitrary origin.
       //!
       //! The offset to the origin is given in meters.
      class coordinate {
      private:
         double x;
         double y;
         double z;
      private:
         coordinate(double x, double y, double z);
         virtual ~coordinate();
      public:
         //! @brief Copies the fields from the right hand side into this,
         //! and returns a reference to this.
         //!
         //! 
         //! @param rhs Object from which to copy the values.
         //! @return Reference to the left hand side of the operator.
         coordinate & operator= (const coordinate & rhs);
         
      };
   }
}

#endif // COORDINATE_HPP