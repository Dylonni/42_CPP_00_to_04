/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:26:12 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:45:09 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default [AAnimal] constructor called" << std::endl;
	this->type = "AAnimal";
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "Parameterized [AAnimal] constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

AAnimal&	AAnimal::operator=(const AAnimal& ref)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	this->type = ref.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout <<"[AAnimal] Destructor called" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::makeSound(void) const
{
	std::cout	<<"🤔\033[1;36m " << this->type <<" Makes an unrecognizable sound\033[0m" << std::endl;
}
