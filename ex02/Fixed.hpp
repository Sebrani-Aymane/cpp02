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
    Fixed(const Fixed& obj);
    Fixed(const int param);
    Fixed(const float param);
    Fixed& operator=(const Fixed& obj);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void)const;
    int toInt(void)const;
    Fixed operator+(const Fixed& obj);
    Fixed operator-(const Fixed& obj);
    Fixed operator*(const Fixed& obj);
    Fixed operator/(const Fixed& obj);
    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    bool operator>(const Fixed& obj);
    bool operator<(const Fixed& obj);
    bool operator>=(const Fixed& obj);
    bool operator<=(const Fixed& obj);
    bool operator==(const Fixed& obj);
    bool operator!=(const Fixed& obj);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    

};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif