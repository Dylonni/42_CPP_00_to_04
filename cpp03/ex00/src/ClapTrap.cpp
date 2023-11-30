/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:12 by dylan             #+#    #+#             */
/*   Updated: 2023/11/28 20:06:30 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	this->_attack_damage = ref._attack_damage;
	this->_energy = ref._energy;
	this->_hit_points = ref._hit_points;
	this->_name = ref._name;
	this->_max_health = ref._max_health;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap::ClapTrap(std::string name) : _hit_points(10), _energy(10), _attack_damage(0), _max_health(_hit_points)
{
	std::cout << "Parameterized constructor called" << std::endl;
	this->_name = name;
	std::cout << "\033[1;36m[ClapTrap] " << name << "\033[0m Appears !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy < 1)
		return (std::cout <<"🪫 \033[1;36m" << this->_name <<"\033[0m" " has no energy left, he cannot attack.." << std::endl, (void)0);
	else if (this->_hit_points <= 0)
		return (this->_hit_points = 0 ,std::cout <<"\033[1;36m" << this->_name <<"\033[0m cannot attack.. He is dead 💀" << std::endl, (void)0);
	std::cout	<<"🗡️\033[1;36m  " << this->_name <<"\033[0m"
				<<"\033[1;35m Attacks!\033[0m dealing "
				<<"\033[1;35m" << this->_attack_damage << "\033[0m" 
				<<" damage to " <<"\033[1;33m" << target << "\033[0m !" << std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 1)
	{
		this->_hit_points = 0;
		return;
	}
	std::cout	<<"💥\033[1;36m " << this->_name <<"\033[0m"
				<<"\033[1;31m Took a hit! -" << amount << "\033[0m HP" << std::endl;
	this->_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy < 1)
		return (std::cout <<"🪫 \033[1;36m" << this->_name <<"\033[0m" " has no energy left, he cannot heal.." << std::endl, (void)0);
	else if (this->_hit_points <= 0)
		return (this->_hit_points = 0 ,std::cout <<"\033[1;36m" << this->_name <<"\033[0m cannot be repaired.. He is Dead 💀" << std::endl, (void)0);
	else if (this->_hit_points == _max_health)
		return (std::cout <<"\033[1;36m" << this->_name <<"\033[0m" "\033[1;32m has maximum HP\033[0m" << std::endl, (void)0);
	this->_energy--;
	if (amount > this->_max_health || (amount + this->_hit_points) > this->_max_health)
		this->_hit_points = _max_health;
	else
		this->_hit_points += amount;
	std::cout	<<"💚 \033[1;36m" << this->_name <<"\033[0m"
				<<"\033[1;32m Healed\033[0m for "
				<<"\033[1;32m" << amount <<"\033[0m"
				<<" health point(s)"
				<< std::endl;
}
