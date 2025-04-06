/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:07:53 by asebrani          #+#    #+#             */
/*   Updated: 2025/04/06 01:43:31 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>
#include <cmath>

class Fixed{
    private:
        int value;
        static const int bits_holder= 8;
    public:
    Fixed();
    Fixed(const Fixed& Fixeed);
    Fixed(const int param);
    Fixed(const float param);
    Fixed& operator=(const Fixed& Fixxedd);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void)const;
    int toInt(void)const;
    Fixed& operator<<(int param);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif