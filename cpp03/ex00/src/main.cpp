/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:07 by dylan             #+#    #+#             */
/*   Updated: 2023/11/28 19:57:25 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

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

void	cp_heal(ClapTrap *cp)
{
	size_t count = 9;
	for (size_t i = 0; i < count; i++)
		cp->takeDamage(1);
	cp->beRepaired(1);
	cp->takeDamage(1);
	cp->beRepaired(1);
	cp->takeDamage(1);
	for (size_t i = 0; i < count; i++)
		cp->beRepaired(1);
	cp->attack("Training Dummy");
}

void	cp_custom(ClapTrap *cp)
{
	cp->takeDamage(10);
	cp->beRepaired(10);
	cp->attack("Training Dummy");
}

void	cp_atk(ClapTrap *cp)
{
	size_t count = 10;
	for (size_t i = 0; i <= count; i++)
		cp->attack("Training Dummy");
}

int main(void)
{	
	int	choice = 0;
	ClapTrap cp("Commander");
	header();
	std::cin >> choice;
	if (!choice || (choice < 1 || choice > 3))
		return (std::cout << "Invalid choice" << std::endl, 1);
	switch (choice)
	{
	case 1:
		cp_atk(&cp);
		break;
	case 2:
		cp_heal(&cp);
		break;
	case 3:
		cp_custom(&cp);
		break;
	}
	return (0);
}
