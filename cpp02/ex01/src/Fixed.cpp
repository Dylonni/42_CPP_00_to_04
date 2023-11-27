/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:12 by dylan             #+#    #+#             */
/*   Updated: 2023/11/22 16:29:31 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void) : _storedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _storedValue(n << _frac)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _storedValue(roundf(n * (1  << _frac)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &ref)
		this->_storedValue = ref.getRawBits();
	return (*this);
}

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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Fixed const& num)
{
	os << num.toFloat();
	return (os);
}
