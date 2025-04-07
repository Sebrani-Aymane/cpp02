/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:08:42 by asebrani          #+#    #+#             */
/*   Updated: 2025/04/06 21:44:10 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout<< "Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& Fixed) : value(Fixed.value)
{
    std::cout<< "Copy constructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed& Fixed)
{
    std::cout<< "Copy assignment operator called" <<std::endl;
    if(this != &Fixed)
    {
        value = Fixed.value;
    }
    return(*this);
}
Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void)const{
    std::cout << "getRawBits member function called"<<std::endl;
    return(value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed::Fixed(const int param)
{
    value = param << bits_holder;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float param)
{
    value = roundf(param * (1 << this->bits_holder));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void)const{
    return (float)value/(1<<bits_holder);
}

int Fixed::toInt(void)const{
    return value >> bits_holder;
}

std::ostream& operator<<(std::ostream& outstrm, const Fixed& fixed) {
    outstrm << fixed.toFloat();
    return outstrm;
}