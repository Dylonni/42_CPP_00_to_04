/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedobj.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:11:16 by daumis            #+#    #+#             */
/*   Updated: 2023/11/22 19:54:02 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Sedobj.hpp"

Sedobj::Sedobj(std::string filename) : _infile(filename)
{
	this->_outfile = this->_infile + ".replace";
}

Sedobj::~Sedobj(){}

void	Sedobj::replace(std::string s1, std::string s2)
{
	std::ifstream file_st(this->_infile.c_str());

	if (s1 == s2)
	{
		std::cout << "Nothing to replace" << std::endl;
		return ;
	}
	if (!file_st.is_open())
	{
		std::cout << "Couldn't open file" << std::endl;
		return ;
	}
	std::ofstream	outfile(this->_outfile.c_str());
	std::string		line;
	
	while (std::getline(file_st, line))
	{
		size_t	pos_found = 0;
		size_t	s1len = s1.length();
		size_t	s2len = s2.length();
		while ((pos_found = line.find(s1, pos_found)) != std::string::npos) //searching for s1 occurences
		{
			line.erase(pos_found, s1len);
			line.insert(pos_found, s2);
			pos_found += s2len;
		}
		outfile << line << std::endl;
	}
	outfile.close();
	file_st.close();
}
