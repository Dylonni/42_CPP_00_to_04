/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedobj.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daumis <daumis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:10:28 by daumis            #+#    #+#             */
/*   Updated: 2023/11/22 19:24:30 by daumis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

class Sedobj
{
private:
	std::string	_infile;
	std::string	_outfile;
public:
	void	replace(std::string s1, std::string s2);
	Sedobj(std::string filename);
	~Sedobj();
};


#endif