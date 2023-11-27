/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:09 by dylan             #+#    #+#             */
/*   Updated: 2023/11/21 18:42:43 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	Zombie::set_zm_name(std::string name)
{
	this->_zm_name = name;
}

Zombie::Zombie(void)
{
	this->_zm_name = "";
}

Zombie::Zombie(std::string name)
{
	this->set_zm_name(name);
}

Zombie::~Zombie(void)
{
	std::cout << _zm_name + ": Oh I'm die, thank you forever.." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _zm_name + ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
