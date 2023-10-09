#include "Fixed.hpp"

const int Fixed::_fractionalsBits = 8;

Fixed::Fixed(): _value(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const i){
	this->_value = i << this->_fractionalsBits;
	return ;
}

Fixed::Fixed(float const f){
	this->_value = roundf(f * (1 << this->_fractionalsBits));
	return ;
}

Fixed::Fixed(Fixed const &fixed): _value(fixed._value){
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(Fixed const &fixed){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return (*this);
}

/**********************************************************************/

int	Fixed::getRawBits()const{
	return this->_value;
}

void	Fixed::setRawBits(int const raw){
	this->_value = raw;
	return ;
}

int Fixed::toInt()const{
	int	res;
	res = this->_value >> this->_fractionalsBits;
	return (res);
}

float	Fixed::toFloat()const{
	float	res;
	
	res = (float)this->_value /(1 << this->_fractionalsBits);
	return res;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}