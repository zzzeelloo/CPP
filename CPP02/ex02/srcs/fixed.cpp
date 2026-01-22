#include "../includes/fixed.hpp"

Fixed::Fixed() : _raw(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_raw = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_raw = roundf(floatValue * (1 << _fractionalBits));
}

Fixed & Fixed::operator=(const Fixed &other)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_raw = other._raw;
    }
    return *this;
}

Fixed::Fixed(const Fixed &other)
{
   // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed()
{
   // std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->_raw) / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const
{
    return this->_raw >> _fractionalBits;
}

//operator
Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

// min&max:
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

//comparison operators
bool Fixed::operator>(const Fixed &other) const
{
    return this->_raw > other._raw;
}
bool Fixed::operator<(const Fixed &other) const
{
    return this->_raw < other._raw;
}
bool Fixed::operator>=(const Fixed &other) const
{
    return this->_raw >= other._raw;
}
bool Fixed::operator<=(const Fixed &other) const
{
    return this->_raw <= other._raw;
}
bool Fixed::operator==(const Fixed &other) const
{
    return this->_raw == other._raw;
}
bool Fixed::operator!=(const Fixed &other) const
{
    return this->_raw != other._raw;
}

//incrementation / decrementation
Fixed& Fixed::operator++() //pre-incrementation
{
    this->_raw++;
    return *this;
}
Fixed Fixed::operator++(int) //post-incrementation
{
    Fixed temp = *this;
    this->_raw++;
    return temp;
}
Fixed& Fixed::operator--() //pre-decrementation
{
    this->_raw--;
    return *this;
}
Fixed Fixed::operator--(int) //post-decrementation
{
    Fixed temp = *this;
    this->_raw--;
    return temp;
}

std::ostream& operator<<(std::ostream& out, Fixed const& value)
{
    out << value.toFloat();
    return out;
}


