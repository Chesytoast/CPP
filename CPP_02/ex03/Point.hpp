#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{
	private:
		Fixed _x;
		Fixed _y;
	
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const& p);
		Point& operator=(Point const& p);
		~Point();
		Fixed	getX()const;
		Fixed	getY()const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif