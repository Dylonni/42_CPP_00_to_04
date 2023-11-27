/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:16 by dylan             #+#    #+#             */
/*   Updated: 2023/11/09 18:50:13 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int					_storedValue;
	static const int	_frac = 8;
public:
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed();
	Fixed(const Fixed& ref);
	Fixed& operator=(const Fixed& ref);
	~Fixed();
};

#endif
