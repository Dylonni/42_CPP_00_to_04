/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:12 by dylan             #+#    #+#             */
/*   Updated: 2023/12/06 17:42:08 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::Cure(const Cure& ref) : _type(ref.getType())
{
	std::cout << "[Cure] Copy constructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& ref)
{
	std::cout << "[Cure] Copy Assignment Operator called" << std::endl;
	if (this != &ref)
		this->_type = ref.getType();
	return (*this);
}

Cure::~Cure()
{
	std::cout <<"[Cure] Destructor called" << std::endl;
}

Cure*	Cure::clone() const
{
	Cure	*mToReturn = new Cure;
	return (mToReturn);
}

void	Cure::use(ICharacter& target)
{
	std::cout	<<"💚\033[32;1m *Heals " << target.getName() << " wounds*\033[0m" << std::endl;
}
