#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int fix_num;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const Fixed& fixed);
    Fixed& operator=(const Fixed& fixed);
    Fixed(int const nb);
	Fixed(float const nb);
    ~Fixed();

    int getRawBits (void) const;
    void setRawBits (int const bits);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const &rhs);


#endif
