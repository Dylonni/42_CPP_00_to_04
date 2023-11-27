/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:59:40 by dylan             #+#    #+#             */
/*   Updated: 2023/10/18 21:39:25 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	void	attack(void);
	void	setWeapon(Weapon &weapon);
	HumanB(std::string name);
	~HumanB();
};

#endif
