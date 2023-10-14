/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <dylan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:00:25 by daumis            #+#    #+#             */
/*   Updated: 2023/10/14 17:09:19 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdio>
# include <cstring>
# include <stdlib.h>

class Phonebook
{
public:
	Contact Contacts[8];
	void	showdir(void);
	int		add_contact(void);
	int		search_contact(void);
	int		index_contact;
	int		loop;
};

int	field_fill(std::string *field);

#endif 
