/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:18:03 by daumis            #+#    #+#             */
/*   Updated: 2023/12/01 16:02:19 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain& ref);
	Brain& operator=(const Brain&);
	~Brain();
};

#endif
