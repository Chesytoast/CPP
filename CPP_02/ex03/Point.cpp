#include "Point.hpp"

Point::Point(){
	return ;
}

Point::Point(float const x, float const y){
	this->_x = Fixed(x);
	this->_y = Fixed(y);
	return ;
}

Point::Point(Point const& p): _x(p._x), _y(p._y){
	return ;
}

Point& Point::operator=(Point const& p){
	if (this != &p){
		this->_x = p._x;
		this->_y = p._y;
	}
	return *this;
}

Point::~Point(){
	return ;
}

Fixed	Point::getX()const{
	return this->_x;
}

Fixed	Point::getY()const{
	return this->_y;
}