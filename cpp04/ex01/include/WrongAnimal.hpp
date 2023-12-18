/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:44:02 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:36:59 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	/*Methods*/
	std::string		getType() const;
	virtual void	makeSound(void) const;
	/*Constructors / Destructors*/
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& ref);
	WrongAnimal& operator=(const WrongAnimal& ref);
	virtual ~WrongAnimal();
};

#endif
