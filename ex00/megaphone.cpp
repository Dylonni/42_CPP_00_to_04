/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:22:03 by daumis            #+#    #+#             */
/*   Updated: 2023/10/11 16:01:46 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	argv++;
	while (*argv)
	{
		while (**argv)
		{
			if (islower(**argv))
				std::cout << (char)toupper(**argv);
			else
				std::cout << **argv;
			(*argv)++;
		}
		argv++;
	}
	std::cout << std::endl;
	return 0;
}
