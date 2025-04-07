#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const Fixed& obj) : value(obj.value)
{
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    if(this != &obj)
    {
        value = obj.value;
    }
    return(*this);
}
Fixed::~Fixed(){
}

int Fixed::getRawBits(void)const{
    return(value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed::Fixed(const int param)
{
    value = param << bits_holder;
}

Fixed::Fixed(const float param)
{
    value = roundf(param * (1 << this->bits_holder));
}

float Fixed::toFloat(void)const{
    return (float)value/(1<<bits_holder);
}

int Fixed::toInt(void)const{
    return value >> bits_holder;
}

std::ostream& operator<<(std::ostream& outstrm, const Fixed& obj) {
    outstrm << obj.toFloat();
    return outstrm;
}

Fixed Fixed::operator+(const Fixed& obj)
{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed& obj)
{
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed& obj)
{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed& obj)
{
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed& Fixed::operator++(void)
{
    value++;
    return *this;
}

Fixed& Fixed::operator--(void)
{
    value--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    value++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    value--;
    return temp;
}

bool Fixed::operator>(const Fixed& obj)
{
    return this->toFloat() > obj.toFloat();
}

bool Fixed::operator<(const Fixed& obj)
{
    return this->toFloat() < obj.toFloat();
}

bool Fixed::operator>=(const Fixed& obj)
{
    return this->toFloat() >= obj.toFloat();
}

bool Fixed::operator<=(const Fixed& obj)
{
    return this->toFloat() <= obj.toFloat();
}

bool Fixed::operator==(const Fixed& obj)
{
    return this->toFloat() == obj.toFloat();
}

bool Fixed::operator!=(const Fixed& obj)
{
    return this->toFloat() != obj.toFloat();
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if(a.toFloat() > b.toFloat())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a.toFloat() > b.toFloat())
        return a;
    return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a.toFloat() < b.toFloat())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if(a.toFloat() < b.toFloat())
        return a;
    return b;
}