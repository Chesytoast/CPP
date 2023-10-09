#include "Fixed.hpp"

const int Fixed::_fractionalsBits = 8;

Fixed::Fixed(): _value(0){
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
	return ;
}

Fixed::~Fixed(){
	return ;
}

/*Arithmetic operator overload*/

Fixed& Fixed::operator=(Fixed const &fixed){
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &fixed)const{
	Fixed res;
	
	res.setRawBits(this->_value + fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(Fixed const &fixed)const{
	Fixed res;
	
	res.setRawBits(this->_value - fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const &fixed)const{
	Fixed res;
	
	res.setRawBits((this->_value * fixed.getRawBits()) >> this->_fractionalsBits);
	return (res);
}

Fixed	Fixed::operator/(Fixed const &fixed)const{
	Fixed res;
	long long int i;
	
	if (fixed.getRawBits() == 0){
		std::cout << "DONT DIVIDE BY ZERO CLOWN !!!" << std ::endl;
		return Fixed(-1.0f);
	}
	i = this->_value << this->_fractionalsBits;
	i /= fixed.getRawBits();
	res.setRawBits(i);
	return (res);
}

/*comparaison operator overload*/

bool	Fixed::operator<(Fixed const &fixed) const{
	return (this->_value < fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const &fixed) const{
	return (this->_value <= fixed.getRawBits());
}

bool	Fixed::operator>(Fixed const &fixed) const{
	return (this->_value > fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fixed) const{
	return (this->_value >= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const &fixed) const{
	return (this->_value == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const &fixed) const{
	return (this->_value != fixed.getRawBits());
}

/*incrementation operator overload*/

Fixed& 	Fixed::operator++(){
	this->_value += 1;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed	temp(*this);
	
	Fixed::operator++();
	return temp;
}

Fixed& 	Fixed::operator--(){
	this->_value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed	temp(*this);
	
	Fixed::operator--();
	return temp;
}


//ostream overload
std::ostream& operator<<(std::ostream& out, Fixed const &fixed){
	out << fixed.toFloat();
	return (out);
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

Fixed&	Fixed::min(Fixed &f1, Fixed &f2){
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed const&	Fixed::min(Fixed const &f1, Fixed const &f2){
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2){
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed const&	Fixed::max(Fixed const &f1, Fixed const &f2){
	if (f1 > f2)
		return f1;
	return f2;
}