/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:36:14 by daumis            #+#    #+#             */
/*   Updated: 2023/11/28 20:01:19 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	this->_max_health = this->_hit_points;
	std::cout << "\033[1;36m[ScavTrap] " << this->_name << "\033[0m has been created with \033[1;36m[ClapTrap]\033[0m Blueprints !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] "<< this->_name << " Destructor called \033[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy < 1)
		return (std::cout <<"🪫 \033[1;36m" << this->_name <<"\033[0m" " has no energy left, he cannot attack.." << std::endl, (void)0);
	else if (this->_hit_points <= 0)
		return (this->_hit_points = 0 ,std::cout <<"\033[1;36m[ScavTrap] " << this->_name <<"\033[0m" " is Dead 💀" << std::endl, (void)0);
	std::cout	<<"🪄 \033[1;36m[ScavTrap] " << this->_name <<"\033[0m"
				<<"\033[1;35m casted a spell !\033[0m dealing "
				<<"\033[1;35m" << this->_attack_damage << "\033[0m" 
				<<" damage to " <<"\033[1;33m" << target << "\033[0m !" << std::endl;
	this->_energy--;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hit_points >= 1)
		std::cout << "🛡️ \033[1;36m [ScavTrap] " << this->_name << " \033[1;93m is now in Gate keeper mode." << "\033[0m" << std::endl;
	else
		std::cout << "\033[1;31m[ScavTrap] " << this->_name << " can't enter in Gate keeper mode. He is Dead 💀 \033[0m" << std::endl;
}
