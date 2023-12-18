/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:07 by dylan             #+#    #+#             */
/*   Updated: 2023/12/07 14:19:24 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	std::cout << " ------------- Creating Main Objects and array -------------\n" << std::endl;
	
	const size_t	arraySize = 10;
	const AAnimal*	j = new Dog();
	const AAnimal*	i = new Cat();
	const AAnimal**	tab = new const AAnimal*[arraySize];

	std::cout << "\n ------------- Creating Objects and putting into tab -------------\n" << std::endl;

	for (size_t i = 0; i < arraySize; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	std::cout << "\n ------------- Here is what the tab contains -------------\n" << std::endl;

	for (size_t i = 0; i < arraySize; i++)
		std::cout << "tab[" << i + 1 << "]: " << tab[i]->getType() << std::endl;
	
	std::cout << "\n ------------- Deleting Animals -------------\n" << std::endl;

	for (size_t i = 0; i < arraySize; i++)
        delete tab[i];

	std::cout << "\n ------------- Deleting the array -------------\n" << std::endl;

	delete[] tab;
	
	std::cout << "\n ------------- Deep Copies -------------\n" << std::endl;
	
	const AAnimal*	acopy = new Cat();
	const AAnimal*	acopy1 = new Dog();
	const AAnimal*	cat_cpy = acopy;
	const AAnimal*	dog_cpy = acopy1;
	cat_cpy->makeSound();
	dog_cpy->makeSound();
	delete cat_cpy;
	delete dog_cpy;

	std::cout << "\n ------------- Deleting Objects from main -------------\n" << std::endl;
	delete j;//should not create a leak
	delete i;
	return (0);
}
