/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:06:30 by daumis            #+#    #+#             */
/*   Updated: 2023/10/14 18:14:11 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"
#include "../include/Contact.hpp"
#include "../include/utils.hpp"

int main(void)
{
	Phonebook	Directory;
	std::string	choice;
	Directory.loop = 0;
	Directory.index_contact = 0;
	int			search_status = 0;

	header();
	while (1)
	{	
		
		if (!std::getline(std::cin, choice))
			return (1);
		if (choice == "ADD" || choice == "1")
		{
			if (Directory.index_contact == 8)
				Directory.index_contact = 0;
			if (Directory.add_contact())
				return (1); 
			(system("clear"), header(), err(1));
		}	
		else if (choice == "SEARCH" || choice == "2")
		{
			search_status = Directory.search_contact();
			if (search_status == -1)
				return (1);
			else if (search_status == 1)
				(system("clear"), header(), err(2));
			else
				header();
		}
		else if (choice == "EXIT" || choice == "3")
			return (0);
		else
			(system("clear"), header(), err(3));
	}
	return (0);
}
