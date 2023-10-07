#include "Fixed.hpp"

const int Fixed::_fractionalsBits = 8;

Fixed::Fixed(): _value(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int i): _value(i){
	return ;
}

Fixed::Fixed(const Fixed &fixed): _value(fixed._value){
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits()const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw){
	this->_value = raw;
	return ;
}