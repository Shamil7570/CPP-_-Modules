#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->fix_num = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(int const nb) {

	this->fix_num = nb << fractional_bits;
}

Fixed::Fixed(float const nb) {

	this->fix_num = roundf(nb * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed& fixed)
{
    Fixed::operator=(fixed);
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    this->fix_num = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->fix_num;
}

void Fixed::setRawBits(int const bits)
{
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

bool Fixed::operator!=(const Fixed& obj){
    return this->toFloat() != obj.toFloat();
}

bool Fixed::operator<=(const Fixed& obj){
    return this->toFloat() <= obj.toFloat();
}

bool Fixed::operator==(const Fixed& obj){
    return this->toFloat() == obj.toFloat();
}

bool Fixed::operator>=(const Fixed& obj){
    return this->toFloat() >= obj.toFloat();
}

bool Fixed::operator<(const Fixed& obj){
    return this->toFloat() < obj.toFloat();
}

bool Fixed::operator>(const Fixed& obj){
    return this->toFloat() > obj.toFloat();
}

Fixed Fixed::operator+(const Fixed &obj) const {
    return Fixed(toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed &obj) const {
    return Fixed(toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed &obj) const {
    return Fixed(toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed &obj) const {
    return Fixed(toFloat() / obj.toFloat());
}

Fixed Fixed::operator++(){
    this->fix_num++;
    return *this;
}

Fixed Fixed::operator--(){
    this->fix_num++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    this->fix_num++;
    return tmp;
}

Fixed Fixed::operator--(int){
    Fixed tmp = *this;
    this->fix_num--;
    return tmp;
}

Fixed &Fixed::min(Fixed& obj1, Fixed& obj2){
    return obj1.fix_num <= obj2.fix_num ? obj1 : obj2;
}

Fixed &Fixed::max(Fixed& obj1, Fixed& obj2){
    return obj1.fix_num >= obj2.fix_num ? obj1 : obj2;
}

const Fixed &Fixed::min(const Fixed& obj1, const Fixed& obj2){
    return obj1.fix_num <= obj2.fix_num ? obj1 : obj2;
}

const Fixed &Fixed::max(const Fixed& obj1, const Fixed& obj2){
    return obj1.fix_num >= obj2.fix_num ? obj1 : obj2;
}