/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:52:43 by daumis            #+#    #+#             */
/*   Updated: 2023/11/22 19:24:22 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Sedobj.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./customsed <filename> <to_find> <replace_with>." << std::endl;
		return (1);
	}
	{
		Sedobj file_to_sed(argv[1]);
		file_to_sed.replace(argv[2], argv[3]);
	}
	return (0);
}
