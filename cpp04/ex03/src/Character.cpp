/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:24:05 by daumis            #+#    #+#             */
/*   Updated: 2023/12/07 19:26:07 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ICharacter.hpp"
#include "../include/Character.hpp"
#include "../include/AMateria.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "[Character] Parameterized constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::Character(const Character& ref) : _name(ref.getName() + "_copy")
{
	std::cout << "[Character] Copy constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if ((ref._inventory)[i])
			(this->_inventory)[i] = (ref._inventory[i])->clone();
		else
			this->_inventory[i] = 0;
	}
}

Character&	Character::operator=(const Character& ref)
{
	std::cout << "[Character] Copy Assignment Operator called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout <<"[Character]: " << this->_name << " destructor called" << std::endl;
}

std::string const&  Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	size_t i = 0;

	if (!m)
	{
		std::cout << "⚠️  [" << this->_name << "] cannot equip a non-existing Materia\n" << std::endl;
		return ;
	}
	for (i = 0; i < 4; ++i)
	{
		if (!(this->_inventory)[i])
			break;
	}
	if (i >= 4)
	{
		std::cout << "⚠️  [" << this->_name << "] cannot equip more than four Materias" << std::endl;
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << "🔮\033[1;93m [" << this->_name << "] Materia [" << m->getType() << "] has been equiped in slot : \033[0m" << i << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << "⚠️  [" << this->_name << "] invalid slot selected, cannot unequip (slot " << idx <<")" << std::endl;
	else if (!(this->_inventory)[idx])
		std::cout << "⚠️  [" << this->_name << "] has nothing equipped (slot " << idx << ")" <<std::endl;
	else
	{
		AMateria *ptr = (this->_inventory)[idx];
		std::cout << "ℹ️  [" << this->_name << "] unequipped '" << ptr->getType() << "' (slot "<< idx << ")" << std::endl;
		(this->_inventory)[idx] = 0;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !(this->_inventory)[idx])
	{
		std::cout << "⚠️  invalid slot selected, cannot use the Materia (slot " << idx <<")" << std::endl;
		return ;
	}
	((this->_inventory[idx])->use(target));
}

AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->_inventory)[idx];
}
