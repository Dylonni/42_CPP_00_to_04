/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:37:08 by dylan             #+#    #+#             */
/*   Updated: 2023/10/18 18:50:23 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	Zombie::set_zm_name(std::string name)
{
	this->_zm_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_zm_name + ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::Zombie(void){}

Zombie::~Zombie(void)
{
	std::cout << this->_zm_name + ": Oh I'm die, thank you forever.." << std::endl;
}
