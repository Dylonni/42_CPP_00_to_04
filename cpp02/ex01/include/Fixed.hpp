/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:16 by dylan             #+#    #+#             */
/*   Updated: 2023/11/21 16:28:15 by daumis           ###   ########.fr       */
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
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;
	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed& ref);
	Fixed& operator=(const Fixed& ref);
	~Fixed(void);
};

std::ostream&	operator<<(std::ostream& os, Fixed const& num);

#endif
