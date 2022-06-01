#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
	this->fix_num = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const nb) {

	std::cout << "Int constructor called" << std::endl;
	this->fix_num = nb << fractional_bits;
}

Fixed::Fixed(float const nb) {

	std::cout << "Float constructor called" << std::endl;
	this->fix_num = roundf(nb * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    Fixed::operator=(fixed);
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fix_num = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fix_num;
}

void Fixed::setRawBits(int const bits)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fix_num = bits;
}

int Fixed::toInt() const
{

	return this->fix_num >> fractional_bits;
}

float Fixed::toFloat() const
{

	return (float)this->fix_num / (float)(1 << fractional_bits);
}

std::ostream& operator<<(std::ostream& out, Fixed const &rhs)
{

	out << rhs.toFloat();
	return out;
}