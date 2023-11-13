/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:03:15 by daumis            #+#    #+#             */
/*   Updated: 2023/11/13 18:15:42 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

std::string	Contact::getFirstName()
{
	return (this->_f_name);
}

std::string	Contact::getLastName()
{
	return (this->_l_name);
}

std::string	Contact::getNickname()
{
	return (this->_nickname);	
}

std::string	Contact::getNumber()
{
	return (this->_number);
}

std::string	Contact::getSecret()
{
	return (this->_secret);	
}

void	Contact::setFirstName(std::string fname)
{
	this->_f_name = fname;
}

void	Contact::setLastName(std::string lname)
{
	this->_l_name = lname;
}

void	Contact::setNickname(std::string nname)
{
	this->_nickname = nname;
}

void	Contact::setNumber(std::string number)
{
	this->_number = number;	
}

void	Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}

