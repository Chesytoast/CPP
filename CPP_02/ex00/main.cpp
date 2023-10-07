#include "Fixed.hpp"

int	main(){
	Fixed a;
	Fixed b( a );
	Fixed c;
	Fixed d(10);
	Fixed e(d);

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;
	std::cout << e.getRawBits() << std::endl;

	c = d;

	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;
	return (0);
}