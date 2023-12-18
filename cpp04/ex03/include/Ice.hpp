/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:16 by dylan             #+#    #+#             */
/*   Updated: 2023/12/06 17:41:26 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string _type;
public:
	/*Methods*/
	Ice*	clone() const;
	void	use(ICharacter& target);
	/*Constructors / Destructors*/
	Ice();
	Ice(const Ice& ref);
	Ice& operator=(const Ice& ref);
	~Ice();
};

#endif
