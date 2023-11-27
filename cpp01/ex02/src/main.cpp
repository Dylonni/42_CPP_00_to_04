/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:55:36 by daumis            #+#    #+#             */
/*   Updated: 2023/10/18 19:25:01 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string hi = "HI THIS IS BRAIN";
	std::string *stringPTR = &hi;
	std::string& stringREF = hi;

	std::cout << "String's Address : " << &hi << std::endl;
	std::cout << "Adress stored into PTR : " << stringPTR << std::endl;
	std::cout << "Adress stored into REF : " << &stringREF << std::endl;
	std::cout << "String's Value : " << hi << std::endl;
	std::cout << "PTR Value : " << *stringPTR << std::endl;
	std::cout << "REF Value: " << stringREF << std::endl;
}
