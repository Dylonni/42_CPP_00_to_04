/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:07 by dylan             #+#    #+#             */
/*   Updated: 2023/11/21 18:41:16 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{	
	std::string buf;
	Zombie	*heap_zm;
	
	heap_zm = newZombie("Foo");
	heap_zm->announce();
	randomChump("RChump");
	delete heap_zm;
	return (0);
}
