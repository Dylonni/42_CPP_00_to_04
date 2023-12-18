/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:24:05 by daumis            #+#    #+#             */
/*   Updated: 2023/12/07 14:08:33 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"

Cat::Cat()
{
	std::cout << "Default [Cat] constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(std::string type)
{
	this->type = type;
	std::cout << "Parameterized [Cat] constructor called" << std::endl;
}

Cat::Cat(const Cat& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = ref.type;
	this->_brain = new Brain(*(ref._brain));
}

Cat&	Cat::operator=(const Cat& ref)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &ref)
	{
		this->type = ref.type;
		delete this->_brain;
		this->_brain = new Brain(*(ref._brain));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout <<"[Cat] Destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout	<<"🐱\033[1;36m " << this->type <<" Goes: MEOW~\033[0m" << std::endl;
}
