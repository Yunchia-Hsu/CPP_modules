/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:41:27 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/23 16:51:30 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>
#include <cctype> // isdigit
#include <string>
#include <iomanip> 
#include <limits>

enum e_literals
{
	Char,
	Int,
	Float,
	Double,
	None,
};

class ScalarConverter 
{
private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& from);
	ScalarConverter& operator=(const ScalarConverter& from);
public:
	static void convert(std::string number);
	 
};
e_literals getType(std::string input);

int ifisChar(std::string input);
		
bool ifisInt(std::string input);
		
bool ifisFloat(std::string input);
		
bool ifisDouble(std::string input);
void convertChar(std::string number, char& c, int& i, float& f, double& d);
bool convertInt(std::string number, char& c, int& i, float& f, double& d);
bool convertFloat(std::string number, char& c, int& i, float& f, double& d);
bool convertDouble(std::string number, char& c, int& i, float& f, double& d);

void printResult(char& c, int& i, float& f, double& d);
// std::stof() – convert string to float
// std::stod() – convert string to double
// std::atof() – convert a char array to double
// std::to_string – convert any data type number to string


#endif