/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:37:54 by dylan             #+#    #+#             */
/*   Updated: 2023/10/18 18:48:26 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class Zombie
{
private:
	std::string _zm_name;
public:
	void	set_zm_name(std::string name);
	void	announce(void);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
