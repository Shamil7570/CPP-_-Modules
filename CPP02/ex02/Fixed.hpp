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
    Fixed& operator=(const Fixed& obj);
    bool    operator>(const Fixed &obj);
    bool    operator<(const Fixed &obj);
    bool    operator>=(const Fixed &obj);
    bool    operator==(const Fixed &obj);
    bool    operator<=(const Fixed &obj);
    bool    operator!=(const Fixed &obj);
    
    Fixed   operator+(const Fixed &obj) const;
    Fixed   operator-(const Fixed &obj) const;
    Fixed   operator*(const Fixed &obj) const;
    Fixed   operator/(const Fixed &obj) const;

    Fixed   operator++();
    Fixed   operator--();
    Fixed   operator++(int);
    Fixed   operator--(int);

    static Fixed&		min(Fixed& obj1, Fixed& obj2);
	static const Fixed&	min(const Fixed& obj1, const Fixed& obj2);
	static Fixed&		max(Fixed& obj1, Fixed& obj2);
	static const Fixed&	max(const Fixed& obj1, const Fixed& obj2);
    
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
