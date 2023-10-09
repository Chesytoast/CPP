#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		static const int	_fractionalsBits;
		int					_value;

	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const &fixed);
		~Fixed();
		
		//arithmetics operators
		Fixed&	operator=(Fixed const &fixed);
		Fixed	operator+(Fixed const &fixed) const;
		Fixed	operator-(Fixed const &fixed) const;
		Fixed	operator*(Fixed const &fixed) const;
		Fixed	operator/(Fixed const &fixed) const;
	
		//comparaison operators
		bool	operator<(Fixed const &fixed) const;
		bool	operator>(Fixed const &fixed) const;
		bool	operator<=(Fixed const &fixed) const;
		bool	operator>=(Fixed const &fixed) const;
		bool	operator==(Fixed const &fixed) const;
		bool	operator!=(Fixed const &fixed) const;
		
		Fixed& 	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
		
		static Fixed& min(Fixed &f1, Fixed &f2);
		static Fixed const& min(Fixed const &f1, Fixed const &f2);
		static Fixed& max(Fixed &f1, Fixed &f2);
		static Fixed const& max(Fixed const &f1, Fixed const &f2);
};

std::ostream& operator<<(std::ostream& out, Fixed const &fixed);

#endif