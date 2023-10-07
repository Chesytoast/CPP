#include "Fixed.hpp"

int	main(){
Fixed a;
Fixed const b( 0.9f );
Fixed const d( 10 );

std::cout << "a is " << a.getRawBits() << std::endl;
std::cout << "b is " << b.getRawBits() << std::endl;
std::cout << "d is " << d.getRawBits()  << std::endl;

std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}