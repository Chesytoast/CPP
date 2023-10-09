#include "Point.hpp"

int main( void ) {
	Point a(5,5);
	Point b(1,2);
	Point c(8,1);
	Point p(5,5);
	
	if (bsp(a, b, c, p))
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	return 0;
}
