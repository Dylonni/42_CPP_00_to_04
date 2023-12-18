/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:16:55 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:48:37 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default [Brain] constructor called" << std::endl;
}

Brain::Brain(const Brain& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Brain&	Brain::operator=(const Brain&)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout <<"[Brain] Destructor called" << std::endl;
}
