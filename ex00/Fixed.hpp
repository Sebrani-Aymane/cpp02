/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 00:42:45 by asebrani          #+#    #+#             */
/*   Updated: 2025/04/06 01:42:52 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>


class Fixed{
    private:
        int value;
        static const int bits_holder= 8;
    public:
    Fixed();
    Fixed(const Fixed& Obj);
    Fixed& operator=(const Fixed& Obj);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


#endif