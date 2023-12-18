/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:43:52 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:53:38 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default [WrongAnimal] constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "Parameterized [WrongAnimal] constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& ref)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	this->type = ref.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout <<"[WrongAnimal] Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout	<<"❓\033[1;36m " << this->type <<" Doesn't sound like the expected animal [WrongAnimal]\033[0m" << std::endl;
}
