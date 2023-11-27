/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:16 by dylan             #+#    #+#             */
/*   Updated: 2023/11/21 18:40:50 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string _zm_name;
public:
	void	announce(void);
	void	set_zm_name(std::string name);
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
