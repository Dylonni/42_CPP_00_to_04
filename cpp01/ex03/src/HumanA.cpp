/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:59:19 by dylan             #+#    #+#             */
/*   Updated: 2023/11/16 17:37:28 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

/*Initialize private members before executing constructor*/
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){}

HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	if (this->_weapon.getType() != "")
		std::cout << this->_name + " Attacks with their " + this->_weapon.getType() << std::endl;
	else
		std::cout << this->_name + ": No Weapon to attack with " << std::endl;
}
