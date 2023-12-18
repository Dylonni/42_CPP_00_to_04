/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:12 by dylan             #+#    #+#             */
/*   Updated: 2023/12/06 17:52:43 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default [Dog] constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type)
{
	this->type = type;
	std::cout << "Parameterized [Dog] constructor called" << std::endl;
}

Dog::Dog(const Dog& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Dog&	Dog::operator=(const Dog& ref)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout <<"[Dog] Destructor called" << std::endl;
}

void Dog::makeSound(void) const 
{
	std::cout	<<"🐶\033[1;36m " << this->type <<" Goes: WOARF!\033[0m" << std::endl;
}
