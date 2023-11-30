/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:07 by dylan             #+#    #+#             */
/*   Updated: 2023/11/28 20:03:50 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

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

void	heal(ClapTrap *ct, ScavTrap *st, FragTrap *ft)
{
	size_t count = 9;
	for (size_t i = 0; i < count; i++)
		(ct->takeDamage(10), st->takeDamage(10) ,ft->takeDamage(10));
	(ct->beRepaired(10), st->beRepaired(10), ft->beRepaired(10));
	(ct->takeDamage(10), st->takeDamage(10), ft->takeDamage(10));
	(ct->beRepaired(10), st->beRepaired(10), ft->beRepaired(10));
	(ct->takeDamage(10), st->takeDamage(10), ft->takeDamage(10));
	count = 10;
	for (size_t i = 0; i < count; i++)
		(ct->beRepaired(10), st->beRepaired(10), ft->beRepaired(10));
	(ct->attack("Dummy"), st->attack("Dummy"), ft->attack("Dummy"));
}

void	custom(ClapTrap *ct, ScavTrap *st, FragTrap *ft)
{
	(ct->takeDamage(10), st->takeDamage(10) ,ft->takeDamage(10));
	(ct->beRepaired(10), st->beRepaired(10), ft->beRepaired(10));
	(ct->attack("Dummy"), st->attack("Dummy"), ft->attack("Dummy"));
}

void	atk(ClapTrap *ct, ScavTrap *st, FragTrap *ft)
{
	size_t count = 50;
	for (size_t i = 0; i <= count; i++)
		(ct->attack("Dummy"), st->attack("Dummy"), ft->attack("Dummy"));
}

int main(void)
{	
	int	choice = 0;
	ClapTrap clap1("Commander1");
	ScavTrap scav1("Commander2");
	FragTrap frag1("Commander3");
	header();
	std::cin >> choice;
	if (!choice || (choice < 1 || choice > 3))
		return (std::cout << "Invalid choice" << std::endl, 1);
	switch (choice)
	{
		case 1:
			atk(&clap1, &scav1, &frag1);
			break;
		case 2:
			heal(&clap1, &scav1, &frag1);
			break;
		case 3:
			custom(&clap1, &scav1, &frag1);
			break;
	}
	scav1.guardGate();
	frag1.highFivesGuys();
	return (0);
}
