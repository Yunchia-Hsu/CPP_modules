/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:32:43 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 19:53:37 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

#include <iostream>
#include <fstream>
#include <sstream> // std::stingstream
#include <string>
class FileReplacer
{
	private:
		std::string filename;
		std::string s1;
		std::string s2;
		
		std::string readFile();
		int writeFile(const std::string &content); //?? why &?
	

	public:

		FileReplacer(const std::string &filename, const std::string &s1, const std::string &s2);
		~FileReplacer();
		int replace();
	
};


#endif
