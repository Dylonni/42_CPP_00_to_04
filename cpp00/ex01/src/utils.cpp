/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:34:14 by daumis            #+#    #+#             */
/*   Updated: 2023/10/14 18:00:44 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.hpp"

void	err(int i)
{
	if (i == 1)
		std::cout << "\n\033[1;32m          CONTACT SUCCESSFULLY ADDED\033[0m\n" << std::endl;
	if (i == 2)
		std::cout << "\n\033[1;31m       Error: COULDN'T RETRIEVE CONTACT\033[0m\n" << std::endl;
	if (i == 3)
		std::cout << "\n\033[1;31m            Error: INCORRECT INPUT \033[0m\n" << std::endl;
	
}

void	header(void)
{
	std::cout << "┌===========================================┐"  << std::endl;
	std::cout << "║\033[1;36m            MY AWESOME PHONEBOOK           \033[0m║"  << std::endl;
	std::cout << "║           ----SELECT A MODE----           ║"  << std::endl;
	std::cout << "║                                           ║"  << std::endl;
	std::cout << "║        [1] ADD, [2] SEARCH, [3] EXIT      ║"  << std::endl;
	std::cout << "║___________________________________________║"  << std::endl;
}

void	section(int i)
{
	if (i == 1)
	{
		std::cout << "            ADD A NEW CONTACT            " << std::endl;
		std::cout << "____________________________________________\n" << std::endl;
	}
	if (i == 2)
	{
		std::cout << "           SEARCH FOR A CONTACT           " << std::endl;
		std::cout << "┌-------------------------------------------┐" << std::endl;
		std::cout << "║\033[1;35m                  DIRECTORY                \033[0m║"  << std::endl;
		std::cout << "║----------║----------║----------║----------║"  << std::endl;
		std::cout << "║   INDEX  ║FIRST NAME║ LAST NAME║  NICKNAME║"  << std::endl;
		std::cout << "║__________║__________║__________║__________║"  << std::endl;
	}
	if (i == 3)
		std::cout << "\n ENTER AN INDEX TO SHOW CONTACT INFORMATIONS \n";
	if (i == 4)
		std::cout << "\033[1;33m|=========      CONTACT INFO      ==========\033[0m|\n\n";
}
