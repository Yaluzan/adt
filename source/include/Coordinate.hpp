//! @file coordinate.hpp
//! @author Matthijs Mud
//! @date March 15th, 2016
//! @version 1.0

#ifndef COORDINATE_HPP
#define COORDINATE_HPP
#include <iostream>
#include "Length.hpp"

// Forward declaration.
class Distance;
class Box;

//! @class coordinate
//! @brief A location in space, specified as an offset to an arbitrary origin.
//!
//! The offset to the origin is given in meters.
class Coordinate {

   friend class Distance;
   friend class Box;

private:
   Length x;
   Length y;
   Length z;

   //! @brief Constructs a coordinate with the given offsets from the origin on the X,Y and Z axis.
   //!
   //! @param x Distance between the origin's X, and this coordinate's.
   //! @param y Distance between the origin's Y, and this coordinate's.
   //! @param z Distance between the origin's Z, and this coordinate's.
   Coordinate(Length x, Length y, Length z);

public:
   //! @brief Creates a coordinate specifying a meaningless location.
   Coordinate();

    //! @brief Copies the fields from the right hand side into this,
   //! and returns a reference to this.
   //!
   //! @param rhs Object from which to copy the values.
   //! @return Reference to the left hand side of the operator.
   Coordinate &operator=(const Coordinate &rhs);

   //! @brief Adds the distance to this coordinate,
   //! and returns a reference to it.
   //!
   //! @param rhs Distance to add to this coordinate.
   //! @return Reference to this coordinate.
   Coordinate &operator+=(const Distance &rhs);

   //! @brief Substracts the given distance from this coordinate,
   //! and returns a reference to it.
   //!
   //! @param rhs Distance to subtract from this coordinate.
   //! @return Reference to this coordinate.
   Coordinate &operator-=(const Distance &rhs);

   //! @brief Gets the coordinate at the given distance from this coordinate.
   //!
   //! @param rhs Distance to add to this coordinate.
   //! @return The coordinate at the given distance from this coordinate.
   Coordinate operator+(const Distance &rhs) const;

   //! @brief Gets the coordinate at the given distance from this coordinate.
   //!
   //! @param rhs Distance to subtract from this coordinate.
   //! @return The coordinate at the given distance from this coordinate.
   Coordinate operator-(const Distance &rhs) const;

   //! @brief Gets the distance the other coordinate is away from this coordinate.
   //!
   //! @param rhs Other coordinate which is used to determine the distance.
   //! @return Distance from this coordinate to the other.
   Distance operator-(const Coordinate &rhs) const;

   //! @brief The arbitrary origin to be used.
   static const Coordinate origin;

   //! @brief Writes the specified coordinate to the std::ostream, returning that stream.
   //!
   //! The output is given in the format "coordinate(xm, ym, zm)",
   //! where the 'x', 'y' and 'z' are replaced by the offsets to the origin.
   //! @param lhs Stream to which to write the string representation of the coordinate.
   //! @param rhs Reference to the object to write to the outputstream.
   //! @return Reference to the stream passed in by lhs.
   //! @see operator>>(std::istream, const r2d2::adt::coordinate &)
   friend std::ostream &operator<<(std::ostream &lhs, const Coordinate &rhs);

   //! @brief Reads a coordinate from the given input stream, returning said stream.
   //!
   //! The input should be given in the format "coordinate(z m, y m, z m)",
   //! ignoring the quotes. The values 'x', 'y' and 'z' should be replaced with floating point values.
   //! Any excess whitespace is ignored. As of now, only meter is supported; other metric prefixes fail.
   //! @param lhs Stream from which to read data
   //! @param rhs Reference to an uninitialized coordinate to overwrite.
   //! @return Reference to the stream passed in by lhs.
   //! @throw std::runtime_error Indicates a Coordinate could not be read from the given input stream,
   //! due to a it being in an incorrect format.
   //! The values in the supplied coordinate are not modified when an exception is thrown.
   //! @see operator<<(std::ostream &, r2d2::adt::coordinate &)
   friend std::istream &operator>>(std::istream &lhs, Coordinate &rhs);

   //! @brief Gets a reference to this coordinate's X-offset to that of the origin.
   //!
   //! @return Reference to the difference between this coordinate's X-position and that of the origin.
   const Length & getX() const;

   //! @brief Gets a reference to this coordinate's Y-offset to that of the origin.
   //!
   //! @return Reference to the difference between this coordinate's Y-position and that of the origin.
   const Length & getY() const;

   //! @brief Gets a reference to this coordinate's Z-offset to that of the origin.
   //!
   //! @return Reference to the difference between this coordinate's Z-position and that of the origin.
   const Length & getZ() const;

};
#endif // COORDINATE_HPP
