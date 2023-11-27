/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:37:06 by dylan             #+#    #+#             */
/*   Updated: 2023/11/21 19:43:53 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zm_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		zm_horde[i].set_zm_name(name);
	return (zm_horde);
}
