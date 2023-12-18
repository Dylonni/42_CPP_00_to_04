/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:21:05 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:38:46 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria	*(_materias[4]);
	size_t		_learnedMaterias;
public:
	/*Methods*/
	AMateria*       createMateria(std::string const & type);
	void            learnMateria(AMateria* m);
	/*Constructors / Destructors*/
	MateriaSource&  operator=(const MateriaSource& ref);
	MateriaSource();
	MateriaSource(const MateriaSource& ref);
	~MateriaSource();
};

#endif
