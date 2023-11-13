/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:56:29 by daumis            #+#    #+#             */
/*   Updated: 2023/11/13 18:11:27 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"
#include "../include/utils.hpp"

int	Phonebook::field_fill(int field)
{
	std::string fieldCpy;
	while (1)
	{
		if (!std::getline(std::cin, fieldCpy))
			return (1);
		if (fieldCpy.empty())
			std::cout << "\033[1;31m  Error: FIELD CAN'T BE BLANK\n\033[0m" << std::endl;
		else
		{
			switch (field)
			{
			case 0:
				Contacts[index_contact].setFirstName(fieldCpy);
				break;
			case 1:
				Contacts[index_contact].setLastName(fieldCpy);
				break;
			case 2:
				Contacts[index_contact].setNickname(fieldCpy);
				break;
			case 3:
				Contacts[index_contact].setNumber(fieldCpy);
				break;
			case 4:
				Contacts[index_contact].setSecret(fieldCpy);
				break;
			}
			break;
		}
	}
	return (0);
}

int	Phonebook::add_contact(void)
{
	(system("clear"), section(1));
	std::cout << "Contact's first name:" << std::endl;
	if (field_fill(0))
		return (1);
	(system("clear"), section(1));
	std::cout <<  "Last name of " + Contacts[index_contact].getFirstName() << std::endl;
	if (field_fill(1))
		return (1);
	(system("clear"), section(1));
	std::cout <<  "Nickname for " + Contacts[index_contact].getFirstName() + " " + Contacts[index_contact].getLastName() << std::endl;
	if (field_fill(2))
		return (1);
	(system("clear"), section(1));
	std::cout <<  "Phone number of " + Contacts[index_contact].getFirstName() + " " + Contacts[index_contact].getLastName() << std::endl;
	if (field_fill(3))
		return (1);
	(system("clear"), section(1));
	std::cout <<  "Darkest secret of " + Contacts[index_contact].getFirstName() + " " + Contacts[index_contact].getLastName() << std::endl;
	if (field_fill(4))
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
		if (Contacts[i].getFirstName().size() <= 10)
			std::cout << std::right << std::setw(10) << Contacts[i].getFirstName();
		else
		{
			(trunc = Contacts[i].getFirstName(), trunc.resize(9));
			std::cout << std::right << std::setw(9) << trunc << ".";
		}
		std::cout << "|";
		if (Contacts[i].getLastName().size() <= 10)
			std::cout << std::right << std::setw(10) << Contacts[i].getLastName();
		else
		{
			(trunc = Contacts[i].getLastName(), trunc.resize(9));
			std::cout << std::right << std::setw(9) << trunc << ".";
		}
		std::cout << "|";
		if (Contacts[i].getNickname().size() <= 10)
			std::cout << std::right << std::setw(10) << Contacts[i].getNickname();
		else
		{
			(trunc = Contacts[i].getNickname(), trunc.resize(9));
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
		if (Contacts[(select[0] - '0') - 1].getFirstName().empty() || index_contact == 0)
			return (1);
		section(4);
		std::cout <<  "First Name: " + Contacts[(select[0] - '0') -1].getFirstName() << std::endl;
		std::cout <<  "Last Name: " + Contacts[(select[0] - '0') -1].getLastName()  << std::endl;
		std::cout <<  "Nickname: " + Contacts[(select[0] - '0') -1].getNickname() << std::endl;
		std::cout <<  "Number: " + Contacts[(select[0] - '0') -1].getNumber() << std::endl;
		std::cout <<  "Darkest Secret: " + Contacts[(select[0] - '0') -1].getSecret() + "\n\n" << std::endl;
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
