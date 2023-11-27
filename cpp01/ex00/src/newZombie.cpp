/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:12 by dylan             #+#    #+#             */
/*   Updated: 2023/10/16 22:35:08 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*createdZombie = new Zombie;
	createdZombie->set_zm_name(name);
	return (createdZombie);
}
