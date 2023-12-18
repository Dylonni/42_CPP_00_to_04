/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:16 by dylan             #+#    #+#             */
/*   Updated: 2023/12/06 17:38:04 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	/*Methods*/
	void	makeSound(void) const;
	/*Constructors / Destructors*/
	Dog();
	Dog(std::string type);
	Dog(const Dog& ref);
	Dog& operator=(const Dog& ref);
	~Dog();
};

#endif