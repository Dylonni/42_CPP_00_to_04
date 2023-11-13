/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:00:25 by daumis            #+#    #+#             */
/*   Updated: 2023/11/13 18:08:47 by daumis           ###   ########.fr       */
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
private:
	Contact Contacts[8];
public:
	void	showdir(void);
	int		add_contact(void);
	int		search_contact(void);
	int		index_contact;
	int		loop;
	int		field_fill(int field);
};

#endif 
