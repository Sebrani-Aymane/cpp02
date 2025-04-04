/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:07:53 by asebrani          #+#    #+#             */
/*   Updated: 2025/04/02 15:09:17 by asebrani         ###   ########.fr       */
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
    Fixed(Fixed& Fixeed);
    Fixed(const int param);
    Fixed& operator=(Fixed& Fixxedd);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


#endif