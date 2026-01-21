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
        Fixed();                         // constructeur par défaut
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed(const Fixed &other);       // constructeur de copie
        Fixed & operator=(const Fixed &other);
        ~Fixed();

        float toFloat(void) const;
        int   toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& value);



#endif