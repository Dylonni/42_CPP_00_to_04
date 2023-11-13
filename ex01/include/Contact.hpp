/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:03:37 by daumis            #+#    #+#             */
/*   Updated: 2023/11/13 18:14:08 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	_f_name;
	std::string	_l_name;
	std::string	_nickname;
	std::string	_number;
	std::string	_secret;
public:
	std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getNumber();
    std::string getSecret();
	void setFirstName(std::string fname);
    void setLastName(std::string lname);
    void setNickname(std::string nname);
    void setNumber(std::string number);
    void setSecret(std::string secret);
};

#endif 
