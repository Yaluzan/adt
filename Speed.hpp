/**
  *@author Job Verhaar
  *@date 15-03-16
  *@version 0.1
*/
#ifndef  _SPEED_HPP
#define _SPEED_HPP

class Speed{
private:
	/// constructor of a speed
	Speed();
	Duration duration;
	Distance distance;
public:
	//! Assign a speed to this speed. 
    /*!
      \param rhs a speed
      \return the assigned speed.
    */
	Speed & operator= (const Speed &);
	//! Checks if a speed is smaller than another speed and returns the boolean
	/*!
      \param rhs a speed
      \return the boolean that indicates if the speed is smaller than the speed
    */
	bool operator< (const Speed &) const;

	//! Checks if a speed is greater  than another speed and returns the boolean
	/*!
      \param rhs a speed
      \return the boolean that indicates if the speed greater than the speed
    */
    bool operator> (const Speed &) const;

	//! Adds a speed to a speed and return the resulting speed.
    /*!
      \param rhs a speed
      \return the calculated speed.
    */
	Speed operator+ ( const Speed & rhs ) const;
	
	//! Adds a speed to a speed and return the resulting speed.
    /*!
      \param rhs a speed
      \return the calculated speed.
    */
	Speed & operator+= ( const Speed & rhs);

	//! Substracts a speed by a speed and return the resulting speed.
    /*!
      \param rhs a speed
      \return the calculated speed.
    */
	Speed operator- ( const Speed & rhs ) const;

	//! Substracts a speed by a speed and return the resulting speed.
    /*!
      \param rhs a speed
      \return the calculated speed.
    */
	Speed & operator-= ( const Speed & rhs );

	//! Multiplies a speed by a duration and return the resulating distance.
    /*!
      \param rhs a Duration.
      \return the calculated distance.
    */
	Distance operator*(const Duration & rhs) const;

	//! Divide a speed by a duration and return the resulting acceleration.
    /*!
      \param rhs a Duration.
      \return the calculated distance.
    */
	Acceleration operator/(const Duration & rhs) const

	//! Multiplie a speed by a double and return the resulting speed
    /*!
      \param rhs a double.
      \return the calculated speed.
    */
	Speed operator* ( const double & rhs ) const;

	//! Multiplie a speed by a double and return the resulting speed
    /*!
      \param rhs a double.
      \return the calculated speed.
    */
	Speed & operator*= ( const double & rhs );

   	//! Multiplie a speed by a double and return the resulting speed
    /*!
      \param n a double.
      \param rhs a Speed.
      \return the calculated speed.
    */
    friend Speed operator* ( double n, const Speed & rhs );

    //! Divide a speed by a speed and return the resulting speed
    /*!
      \param n a double.
      \param rhs a Speed.
      \return the calculated speed.
    */
    Double operator/ ( const Speed & rhs);
	/// appends a speeds to an ostream and returns an ostream
	ostream& operator<< (ostream & os, const Speed &rhs) const;
	/// depend a speed from an istream and return the istream
	istream & operator>>( istream & is, Speed & rhs)
};
#endif;
#endif;