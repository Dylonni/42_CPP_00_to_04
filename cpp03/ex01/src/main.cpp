/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:07 by dylan             #+#    #+#             */
/*   Updated: 2023/11/28 19:57:13 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

void	header(void)
{
	std::cout << "┌=========================┐"  << std::endl;
	std::cout << "║\033[1;36m   --PICK A SCENARIO--   \033[0m║"  << std::endl;
	std::cout << "║                         ║"  << std::endl;
	std::cout << "║\033[1;35m[1] ATTACK\033[0m     \033[1;32m[2] HEAL\033[0m  ║"  << std::endl;
	std::cout << "║                         ║"  << std::endl;
	std::cout << "║       [3] CUSTOM        ║"  << std::endl;
	std::cout << "║_________________________║"  << std::endl;
}

void	st_heal(ScavTrap *st)
{
	size_t count = 9;
	for (size_t i = 0; i < count; i++)
		st->takeDamage(10);
	st->beRepaired(10);
	st->takeDamage(10);
	st->beRepaired(10);
	st->takeDamage(10);
	for (size_t i = 0; i < count; i++)
		st->beRepaired(10);
	st->attack("Training Dummy");
}

void	st_custom(ScavTrap *st)
{
	st->takeDamage(100);
	st->beRepaired(10);
	st->attack("Training Dummy");
}

void	st_atk(ScavTrap *st)
{
	size_t count = 50;
	for (size_t i = 0; i <= count; i++)
		st->attack("Training Dummy");
}

int main(void)
{	
	int	choice = 0;
	ScavTrap scav1("Commander2");
	header();
	std::cin >> choice;
	if (!choice || (choice < 1 || choice > 3))
		return (std::cout << "Invalid choice" << std::endl, 1);
	switch (choice)
	{
		case 1:
			st_atk(&scav1);
			break;
		case 2:
			st_heal(&scav1);
			break;
		case 3:
			st_custom(&scav1);
			break;
	}
	scav1.guardGate();
	return (0);
}
