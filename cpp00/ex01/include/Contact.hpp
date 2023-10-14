/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:03:37 by daumis            #+#    #+#             */
/*   Updated: 2023/10/13 11:37:31 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
public:
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	number;
	std::string	secret;
};

#endif 
