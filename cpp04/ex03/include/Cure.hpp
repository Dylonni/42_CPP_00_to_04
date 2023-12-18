/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:44:02 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:41:54 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string _type;
public:
	/*Methods*/
	Cure*	clone() const;
	void	use(ICharacter& target);
	/*Constructors / Destructors*/
	Cure();
	Cure(const Cure& ref);
	Cure& operator=(const Cure& ref);
	~Cure();
};

#endif
