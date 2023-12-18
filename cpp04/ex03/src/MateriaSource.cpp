/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:18:33 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:31:01 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/AMateria.hpp"

MateriaSource::MateriaSource()  : _learnedMaterias(0)
{
    for (size_t i = 0; i < 4; i++)
        this->_materias[i] = 0;
    std::cout << "[MateriaSource] constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
        {
            delete this->_materias[i];
            this->_materias[i] = 0;
        }
    }
    std::cout << "[MateriaSource] destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& ref) : _learnedMaterias(0)
{
    for (int i = 0; i < 4; i++)
	{
        delete this->_materias[i];
		if (ref._materias[i])
			this->_materias[i] = (ref._materias[i])->clone();
        else
            this->_materias[i] = 0;
	}
    std::cout << "[MateriaSource] Copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ref)
{
    if (this != &ref)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materias[i])
                delete this->_materias[i];
            if (ref._materias[i])
                this->_materias[i] = (ref._materias[i])->clone();
            else
                this->_materias[i] = 0;
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* m)
{
    size_t i = 0;
    this->_learnedMaterias++;
    if (this->_learnedMaterias > 4)
    {
        delete m;
        return ;
    }
    AMateria* tmp;
    tmp = m;
    while ((this->_materias)[i] != 0 && i < 4)
		i++;
    if (i >= 4)
    {
        std::cout << "⚠️  Impossible to learn more than 4 Materias.." << std::endl;
        return ;
    }
    (this->_materias)[i] = tmp;
    std::cout << "Ⓜ️ \033[1;35m MateriaSource has learned : " << m->getType() << "\033[0m"<< std::endl;
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    int i = 0;

	while ((this->_materias)[i] && ((this->_materias)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->_materias)[i])
	{
		std::cout << "⚠️  '" << type << "' Materia does not exit\n";
		return (NULL);
	}
	std::cout << "ℹ️  Materia [" << type << "] created\n";
	return (((this->_materias)[i])->clone());
}
