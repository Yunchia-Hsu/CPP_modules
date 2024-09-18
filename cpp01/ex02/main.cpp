/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:50:47 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 11:35:47 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str =  "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "The memory address of the variable str: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR:   " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:   " << &stringREF << std::endl;
	
	std::cout << "\nThe value of the variable str:     " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}