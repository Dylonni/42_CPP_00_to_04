/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:59:21 by dylan             #+#    #+#             */
/*   Updated: 2023/11/16 17:37:16 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB(){}

void	HumanB::attack(void)
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
		std::cout << this->_name + " Attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name + ": No Weapon to attack with" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
