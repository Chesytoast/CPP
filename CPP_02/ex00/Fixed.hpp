#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		static const int	_fractionalsBits;
		int					_value;

	public:
		Fixed();
		Fixed(int i);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed& operator = (const Fixed &fixed);
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif