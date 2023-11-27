/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:16 by dylan             #+#    #+#             */
/*   Updated: 2023/11/27 16:00:36 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int					_storedValue;
	static const int	_frac = 8;
public:
	/*Public function members*/
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;
	/*Constructors and Destructor*/
	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed& ref);
	~Fixed(void);
	/*Comparison Operators overloads*/
	bool operator>(const Fixed& ref) const;
	bool operator<(const Fixed& ref) const;
	bool operator>=(const Fixed& ref) const;
	bool operator<=(const Fixed& ref) const;
	bool operator==(const Fixed& ref) const;
	bool operator!=(const Fixed& ref) const;
	/*Arithmetic Operators Overloads*/
	Fixed& operator=(const Fixed& ref); /*This is an assignment not a comparison !*/
	Fixed operator+(const Fixed& ref) const;
	Fixed operator-(const Fixed& ref) const;
	Fixed operator*(const Fixed& ref) const;
	Fixed operator/(const Fixed& ref) const;
	/*Increment/Decrement Overloads*/
	Fixed&  operator++(void);
	Fixed   operator++(int);
	Fixed&  operator--(void);
	Fixed   operator--(int);
	/*Static Functions*/
	static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);	
};

std::ostream&	operator<<(std::ostream& os, Fixed const& num);

#endif
