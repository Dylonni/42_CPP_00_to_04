/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:16 by dylan             #+#    #+#             */
/*   Updated: 2023/12/06 17:34:40 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
protected:
	std::string	type;
	AAnimal();
public:
	/*Methods*/
	std::string		getType() const;
	virtual void	makeSound(void) const;
	/*Constructors / Destructors*/
	AAnimal(std::string type);
	AAnimal(const AAnimal& ref);
	AAnimal& operator=(const AAnimal& ref);
	virtual ~AAnimal() = 0;
};

#endif
