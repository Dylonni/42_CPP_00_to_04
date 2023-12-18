/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:26:12 by daumis            #+#    #+#             */
/*   Updated: 2023/12/05 23:40:31 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "[AMateria] constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& ref) : _type(ref._type)
{
	std::cout << "[AMateria] Copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "[AMateria] Parameterized constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout <<"[AMateria] destructor called" << std::endl;
}

std::string const&	AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "🔮 Materia " << this->_type << "has been used on: " << target.getName() << std::endl;
}
