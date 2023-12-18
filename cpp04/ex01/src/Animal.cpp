/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:26:12 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:48:23 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default [Animal] constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Parameterized [Animal] constructor called" << std::endl;
}

Animal::Animal(const Animal& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Animal&	Animal::operator=(const Animal& ref)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	this->type = ref.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout <<"[Animal] Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout	<<"🤔\033[1;36m " << this->type <<" Makes an unrecognizable sound\033[0m" << std::endl;
}
