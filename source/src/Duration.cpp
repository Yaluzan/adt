#include "../include/Duration.hpp"

const Duration Duration::SECOND(1);
const Duration Duration::MILLISECOND(1/1000);
const Duration Duration::MINUTE(60);

Duration::Duration(double seconds): seconds{seconds} {

}

Duration Duration::operator+( const Duration& rhs) const{
	double result = seconds + rhs.seconds;
	return Duration(result);
}

Duration Duration::operator- (const Duration& rhs) const {
	double result = seconds - rhs.seconds;
	return Duration(result);
}

Duration Duration::operator* (const double& rhs) const{
	double result = seconds * rhs;
	return result;
}

Duration Duration::operator/ (const double& rhs) const{
	double result = seconds;
	return result;
}
bool Duration::operator< (const Duration& rhs) const{
	return seconds < rhs.seconds;
}
bool Duration::operator> (const Duration& rhs) const{
	return seconds > rhs.seconds;
}

std::ostream& operator<<(std::ostream& lhs, const Duration& rhs){
	lhs<< "duration: " << rhs.seconds << "s";
	return lhs;
}

std::istream& operator>>(std::istream& lhs, Duration& rhs){
	std::cout<< "enter duration in seconds: " << std::endl;
	lhs>>rhs.seconds;
	return lhs;
}

Duration& Duration::operator=(const Duration& rhs){
	seconds = rhs.seconds;
	return *this;
}
