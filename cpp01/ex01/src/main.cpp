/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:37:11 by dylan             #+#    #+#             */
/*   Updated: 2023/11/21 19:44:09 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{	
	Zombie		*horde;
	std::string	buf;
	size_t		number = 10;
	
	horde = zombieHorde(number, "Foo");
	for (size_t i = 0; i < number; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}