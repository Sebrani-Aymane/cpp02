/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 02:01:59 by asebrani          #+#    #+#             */
/*   Updated: 2025/04/01 23:49:30 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout<< "Default constructor called"<<std::endl;
}

Fixed::Fixed(Fixed& Fixeed) : value(Fixeed.value)
{
    std::cout<< "Copy constructor called"<<std::endl;
}

Fixed& Fixed::operator=(Fixed& Fixxedd)
{
    std::cout<< "Copy assignment operator called" <<std::endl;
    if(this != &Fixxedd)
    {
        value = Fixxedd.value;
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