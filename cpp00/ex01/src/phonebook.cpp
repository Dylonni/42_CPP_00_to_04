/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:56:29 by daumis            #+#    #+#             */
/*   Updated: 2023/10/14 18:12:17 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"
#include "../include/utils.hpp"

int	field_fill(std::string *field)
{
	while (1)
	{
		if (!std::getline(std::cin, *field))
			return (1);
		if (field->empty())
			std::cout << "\033[1;31m  Error: FIELD CAN'T BE BLANK\n\033[0m" << std::endl;
		else
			break;
	}
	return (0);
}

int	Phonebook::add_contact(void)
{
	(system("clear"), section(1));
	std::cout << "Contact's first name:" << std::endl;
	if (field_fill(&Contacts[index_contact].f_name))
		return (1);
	(system("clear"), section(1));
	std::cout <<  "Last name of " + Contacts[index_contact].f_name << std::endl;
	if (field_fill(&Contacts[index_contact].l_name))
		return (1);
	(system("clear"), section(1));
	std::cout <<  "Nickname for " + Contacts[index_contact].f_name + " " + Contacts[index_contact].l_name << std::endl;
	if (field_fill(&Contacts[index_contact].nickname))
		return (1);
	(system("clear"), section(1));
	std::cout <<  "Phone number of " + Contacts[index_contact].f_name + " " + Contacts[index_contact].l_name << std::endl;
	if (field_fill(&Contacts[index_contact].number))
		return (1);
	(system("clear"), section(1));
	std::cout <<  "Darkest secret of " + Contacts[index_contact].f_name + " " + Contacts[index_contact].l_name << std::endl;
	if (field_fill(&Contacts[index_contact].secret))
		return (1);
	if (index_contact < 8)
	{
		index_contact++;
		if (loop < 8)
			loop++;
	}
	return (system("clear"), 0);
}

void	Phonebook::showdir(void)
{
	std::string trunc;

	for (int i = 0; i < loop; i++)
	{
		std::cout << "║";
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		if (Contacts[i].f_name.size() <= 10)
			std::cout << std::right << std::setw(10) << Contacts[i].f_name;
		else
		{
			(trunc = Contacts[i].f_name, trunc.resize(9));
			std::cout << std::right << std::setw(9) << trunc << ".";
		}
		std::cout << "|";
		if (Contacts[i].l_name.size() <= 10)
			std::cout << std::right << std::setw(10) << Contacts[i].l_name;
		else
		{
			(trunc = Contacts[i].l_name, trunc.resize(9));
			std::cout << std::right << std::setw(9) << trunc << ".";
		}
		std::cout << "|";
		if (Contacts[i].nickname.size() <= 10)
			std::cout << std::right << std::setw(10) << Contacts[i].nickname;
		else
		{
			(trunc = Contacts[i].nickname, trunc.resize(9));
			std::cout << std::right << std::setw(9) << trunc << ".";
		}
		std::cout << "║" << std::endl;
		std::cout << "║___________________________________________║" << std::endl;
	}
}

int	Phonebook::search_contact(void)
{
	std::string select;
	std::string back;
		
	(system("clear") ,section(2), showdir(), section(3));
	if (!std::getline(std::cin, select))
		return (-1);
	if (select.size() == 1 && (select[0] > '0' && select[0] <= '8'))
	{
		if (Contacts[(select[0] - '0') - 1].f_name.empty() || index_contact == 0)
			return (1);
		section(4);
		std::cout <<  "First Name: " + Contacts[(select[0] - '0') -1].f_name << std::endl;
		std::cout <<  "Last Name: " + Contacts[(select[0] - '0') -1].l_name  << std::endl;
		std::cout <<  "Nickname: " + Contacts[(select[0] - '0') -1].nickname << std::endl;
		std::cout <<  "Number: " + Contacts[(select[0] - '0') -1].number << std::endl;
		std::cout <<  "Darkest Secret: " + Contacts[(select[0] - '0') -1].secret + "\n\n" << std::endl;
		std::cout << "Enter [0] or 'BACK' -> Back to main menu" << std::endl;
		while (1)
		{
			if (!std::getline(std::cin, back))
				return (-1);
			if (back == "BACK" || back == "0")
				return (system("clear"), 0);
		}
	}
	return (1);
}
