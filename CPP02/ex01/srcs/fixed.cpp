#include "../includes/fixed.hpp"

Fixed::Fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->_raw = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    this->_raw = roundf(floatValue * (1 << _fractionalBits));
}

Fixed & Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_raw = other._raw;
    }
    return *this;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->_raw) / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const
{
    return this->_raw >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, Fixed const& value)//a revoir
{
    out << value.toFloat();
    return out;
}