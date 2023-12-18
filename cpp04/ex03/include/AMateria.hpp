/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:16 by dylan             #+#    #+#             */
/*   Updated: 2023/12/06 17:31:52 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	const std::string _type;
public:
	/*Methods*/
	std::string const&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
	/*Constructors / Destructors*/
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& ref);
	virtual ~AMateria();
};

#endif
