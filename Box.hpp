#ifndef _BOX_HPP
#define _BOX_HPP

class Coordinate; // Fake mock-class until naming off Coordinate class is fixed
#include "Distance.hpp"
#include <iostream>

/**
	ToDo implementation of a box
	Review
	Testing
	
*	@author 		Stephan Vivie
*	@date			15-03-2016
*	@version		0.1
	@brief	A 3D rectangular box in space, which is aligned to the 3 axises.
	
*/

class Box {

private:
	/***
	* CONSTRUCTORS
	*/

	/// Constructs a box with 2 coordinates, bottom left and top right of the 3D ractangle
	Box (Coordinate bottomLeft, Coordinate topRight);

	/// Constructs a box with one coordinate and a distance, bottom left coordinate and the distance of the axises.
	Box (Coordinate origin, Distance dist);

public:
	/***
	* METHODS
	*/

	/// Checkts whether box contains coordinate, returns boolean
	bool contains (Coordinate coord);

	/// Check whether box contains another box, returns boolean
	bool contains (Box box);

	/// Check whether box intersects with another box, returns boolean
	bool intersects (Box box);

	/// Set the bottom left coordinate
	void setBottomLeft (Coordinate coord);	

	///  Return the bottom left coordinate
	Coordinate getBottomLeft();

	/// Set the top right coordinate
	void setTopRight (Coordinate coord);

	/// Returns the top right coordinate
	Coordinate getTopRight();

	/// Returns box that contains both boxes
	Box getUnionBox(Box box);

	/// Returns box that contains the shared space (intersection area) between two boxes
	Box getIntersectionBox(Box box);

	/// Set the size of the axis
	void setAxisSize(Distance dist);

	/// Returns the size of the axis
	Distance getAxisSize();

	/***
	* OPERATORS
	*/

	/// assignment operator for a box
	Box & operator= ( const Box & );


	/***
	* FRIEND OPERATORS
	*/

	/// appends a box to an ostream and returns the ostream
	friend std::ostream & operator<< (std::ostream & os, const Box & rhs);

	/// writes a box to an instream and returns the istream
	friend std::istream & operator>> (std::istream & is, Box & rhs);

private:
	/***
	* ATTRIBUTES
	*/
	
	Coordinate bottomLeft;
	Coordinate topRight;


};

#endif	// _BOX_HPP

