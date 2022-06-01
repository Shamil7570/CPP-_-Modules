#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
	this->fix_num = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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