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
		Fixed&	operator = (Fixed const &fixed);
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif