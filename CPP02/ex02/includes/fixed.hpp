#ifndef  FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
        int _raw;
        static const int _fractionalBits = 8;

    public:
        Fixed();
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed(const Fixed &other);
        Fixed & operator=(const Fixed &other);
        ~Fixed();

        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
       // non static = “méthode d’un objet”
        // static = “outil de la classe”

        
        // Opérations arithmétiques
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        // Incrémentation / Décrémentation
        Fixed& operator++();        // pré-incrémentation
        Fixed operator++(int);    // post-incrémentation
        Fixed& operator--();        // pré-décrémentation
        Fixed operator--(int);    // post-décrémentation

        // Comparaison
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        float toFloat(void) const;
        int   toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& value);


#endif