/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:00:54 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:47:44 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default [WrongCat] constructor called" << std::endl;
	this->type = "NotACat";
}

WrongCat::WrongCat(std::string type)
{
	this->type = type;
	std::cout << "Parameterized [WrongCat] constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

WrongCat&	WrongCat::operator=(const WrongCat& ref)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	this->type = ref.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout <<"[WrongCat] Destructor called" << std::endl;
}

