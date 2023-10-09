#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed v1, v2, denom;
	
	denom = ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
	v1 = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / denom;
	v2 = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / denom;
	if (v1 >= 0 && v1 <= 1 && v2 >= 0 && v2 <= 1 && v1 + v2 <= 1)
		return true;
	return false;
}
