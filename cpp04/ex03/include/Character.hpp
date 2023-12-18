/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:45:08 by daumis            #+#    #+#             */
/*   Updated: 2023/12/06 17:32:14 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
private:
	AMateria	*(_inventory[4]);
	std::string _name;
public:
	/*Methods*/
    std::string const&  getName() const;
    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter& target);
	AMateria			*getMateriaFromInventory(int idx);
	/*Constructors / Destructors*/
	Character(std::string name);
	Character(const Character& ref);
	Character& operator=(const Character& ref);
	~Character();
};

#endif
