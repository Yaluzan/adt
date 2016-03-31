#include "../include/Box.hpp"

Box::Box(Coordinate bottomLeft, Coordinate topRight):
	bottomLeft(bottomLeft),
	topRight(topRight)
{}

Box::Box(Coordinate origin, Distance dist):
	bottomLeft(origin),
	topRight(origin) // construct with origin element so the reference gets assigned
{
	// add distance to the topRight attribute
	topRight = Coordinate(topRight.x + dist.getX(),topRight.y + dist.getY(),topRight.z + dist.getZ());
}

bool Box::contains(Coordinate coord)
{
	// Check if coordinate  is within bottomLeft attribute and topRight attribute
	if (coord.x > bottomLeft.x &&
		coord.y > bottomLeft.y &&
		coord.z > bottomLeft.z)
	{

		if (coord.x < topRight.x &&
		coord.y < topRight.y &&
		coord.z < topRight.z)
		{
			return true;
		}

	}

	if (coord.x < bottomLeft.x &&
		coord.y < bottomLeft.y &&
		coord.z < bottomLeft.z
		)
	{
		if(coord.x > topRight.x &&
			coord.y > topRight.y &&
			coord.z > topRight.z)
		{
			return true;	
		}
	}


			
	return false;
}

bool Box::contains(Box box)
{
	// Check if both coordinates of the box attribute are within current box bottomLeft and topRight
	if (this->contains(box.bottomLeft) && this->contains(box.topRight))
	{
		return true;
	} 
	return false;
}

bool Box::intersects(Box box)
{
	// Check if there is an intersection between two boxes
	if(this->contains(box.bottomLeft) || this->contains(box.topRight))
	{
		return true;
	}
	return false;
}

Coordinate Box::getBottomLeft()
{
	return bottomLeft;
}

Coordinate Box::getTopRight()
{
	return topRight;
}

Box Box::getUnionBox(Box box)
{
	Coordinate newBottomLeft;
	Coordinate newTopRight;

	(bottomLeft.x < box.bottomLeft.x) ?
		newBottomLeft.x = bottomLeft.x : newBottomLeft.x = box.bottomLeft.x;
	
	
	(bottomLeft.y < box.bottomLeft.y) ?
		newBottomLeft.y = bottomLeft.y : newBottomLeft.y = box.bottomLeft.y;

	(bottomLeft.z < box.bottomLeft.z) ? 
		newBottomLeft.z = bottomLeft.z : newBottomLeft.z = box.bottomLeft.z;
	
	(topRight.x > box.topRight.x) ?
		newTopRight.x = topRight.x : newTopRight.x = box.topRight.x;

	(topRight.y > box.topRight.y) ?
		newTopRight.y = topRight.y : newTopRight.y = box.topRight.y;

	(topRight.z > box.topRight.z) ?
		newTopRight.z = topRight.z : newTopRight.z = box.topRight.z;

	return Box(newBottomLeft, newTopRight);
}

Box Box::getIntersectionBox(Box box)
{
	if(this->intersects(box))
	{
		// return intersection box
		if(this->contains(box.bottomLeft))
		{
			// intersectionBox bottomLeft
			return Box(box.getBottomLeft(), topRight);
		}
		else
		{
			return Box(bottomLeft, box.getTopRight());
		}
	}
	else
	{
		// no intersection box
		return Box(Coordinate(), Coordinate());
	}
		
}

Distance Box::getAxisSize()
{
	Distance dist;

	dist.setX(topRight.x - bottomLeft.x);
	dist.setY(topRight.y - bottomLeft.y);
	dist.setZ(topRight.z - bottomLeft.z);

	return dist;
}

Box Box::operator=(const Box & rhs)
{	
	bottomLeft = rhs.bottomLeft;
	topRight = rhs.topRight;

	return Box(bottomLeft, topRight);
}

std::ostream & operator <<(std::ostream & lhs, const Box & rhs) {
	lhs << "box (" << rhs.bottomLeft << " " << rhs.topRight << ")";
}
