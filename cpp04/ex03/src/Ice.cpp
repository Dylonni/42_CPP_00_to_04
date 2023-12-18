/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:43:52 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:41:18 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(const Ice& ref) : _type(ref.getType())
{
	std::cout << "[Ice] Copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& ref)
{
	std::cout << "[Ice] Copy Assignment Operator called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout <<"[Ice] destructor called" << std::endl;
}

Ice*	Ice::clone() const
{
	Ice	*mToReturn = new Ice;
	return (mToReturn);
}

void	Ice::use(ICharacter& target)
{
	std::cout	<<"❄️\033[1;96m  *shoots an ice bolt at " << target.getName() << "*\033[0m" << std::endl;
}
