/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:32:37 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 19:52:21 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <iostream>

int main (int argc, char *argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid input" << std::endl;
		std::cout << "Please enter <filename> <string-to-replace> <string-to-be-replaced>" << std::endl;
		return 1;
	}
	else
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		FileReplacer replacer(filename, &s1, &s2);
		if (replacer.replace == 1)
			return 1;
	}
	return 0;
}