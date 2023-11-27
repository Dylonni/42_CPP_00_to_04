/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:12 by dylan             #+#    #+#             */
/*   Updated: 2023/11/27 15:20:24 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/*Constructors & Destructor*/

Fixed::Fixed(void) : _storedValue(0){}

Fixed::Fixed(const int n) : _storedValue(n << _frac){}

Fixed::Fixed(const float n) : _storedValue(roundf(n * (1  << _frac))){}

Fixed::Fixed(const Fixed& ref)
{
	*this = ref;
}

Fixed::~Fixed(void){}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	if (this != &ref)
		this->_storedValue = ref.getRawBits();
	return (*this);
}
/*Comparison Operators overloads*/

bool	Fixed::operator>(const Fixed& ref) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool	Fixed::operator<(const Fixed& ref) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool	Fixed::operator>=(const Fixed& ref) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool	Fixed::operator<=(const Fixed& ref) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool	Fixed::operator==(const Fixed& ref) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool	Fixed::operator!=(const Fixed& ref) const
{
	return (this->getRawBits() != ref.getRawBits());
}

/*Arithmetic Operators Overloads*/

Fixed	Fixed::operator+(const Fixed& ref) const
{
	return (this->toFloat() + ref.toFloat());
}

Fixed	Fixed::operator-(const Fixed& ref) const
{
	return (this->toFloat() - ref.toFloat());
}

Fixed	Fixed::operator*(const Fixed& ref) const
{
	return (this->toFloat() * ref.toFloat());
}

Fixed	Fixed::operator/(const Fixed& ref) const
{
	return (this->toFloat() / ref.toFloat());
}

/*Public function members*/

int	Fixed::getRawBits() const
{
	return (this->_storedValue);
}

void	Fixed::setRawBits(int raw)
{
	this->_storedValue = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_storedValue >> this->_frac);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << this->_frac));
}

/*Incremental & Decremental*/

Fixed&   Fixed::operator++(void)
{
    ++this->_storedValue;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    tmp._storedValue = this->_storedValue++;
    return (tmp);
}

Fixed& Fixed::operator--(void)
{
    --this->_storedValue;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    tmp._storedValue = this->_storedValue--;
    return (tmp);
}

/*Min & Max operations*/

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

std::ostream& operator<<(std::ostream& os, Fixed const& num)
{
	os << num.toFloat();
	return (os);
}
