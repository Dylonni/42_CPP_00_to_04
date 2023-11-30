/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:34:50 by dylan             #+#    #+#             */
/*   Updated: 2023/11/28 19:54:58 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy = 100;
	this->_attack_damage = 3;
	this->_max_health = this->_hit_points;
	std::cout << "\033[1;36m[FragTrap] " << this->_name << "\033[0m has been created with \033[1;36m[ClapTrap]\033[0m Blueprints !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] "<< this->_name << " Destructor called \033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hit_points >= 1)
		std::cout << "🙏 \033[1;32m[FragTrap] " << this->_name << " : Let's HIGH FIVE BOYZ !\033[0m" << std::endl;
	else
		std::cout << "\033[1;31m[FragTrap] " << this->_name << " can't do High Fives. He is Dead 💀 \033[0m" << std::endl;
}
