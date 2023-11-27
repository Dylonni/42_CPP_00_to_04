/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:59:26 by dylan             #+#    #+#             */
/*   Updated: 2023/10/18 22:13:41 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"


std::string const &Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}

Weapon::Weapon(std::string name)
{
	this->setType(name);
}

Weapon::~Weapon(){}
