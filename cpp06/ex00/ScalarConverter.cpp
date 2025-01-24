/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:41:30 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/23 16:51:20 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
	std::cout<<"default constructor" << std::endl;
}
ScalarConverter::~ScalarConverter()
{
	std::cout<<"default destructor" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter& from)
{
	(void)from;
	std::cout<<"copy constructor" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& from)
{
	std::cout << "copy assignement operator" << std::endl;
	(void)from;
	return *this;
}


int ifisChar(std::string input)
{
	int len = input.length();
	
	if (len == 0)
		return 0;
	else if (len == 1 && (!isdigit(input[0])))
		return 1;
	return 10;
}
		
bool ifisInt(std::string input)
{
	

	size_t i = 0;
	if (input[0] == '-')
		i++;
	while(input[i])
	{
		
		if (!std::isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}
		
bool ifisFloat(std::string input)
{
	if (input == "-inff" || input == "inff" || input == "nanf")
		return true;

	size_t i = 0;
	int dot = 0;
	if (input[0] == '-')
		i++;
	for ( ; i < (input.length() - 1); i++)
	{
		if (input[i] == '.')
		{
			if (input[i + 1])
				dot++;
			else
				return false;
		}	
		if (!isdigit(input[i]) )
		{
			if (input[i] != '.' && input[i] != 'f')
				return false;
		}
	}
			

	if (dot == 1 && input[input.length()- 1] == 'f')
		return true;
	return false;
}
		
bool ifisDouble(std::string input)
{
	if (input == "-inf" || input == "inf" || input == "nan")
		return true;

	size_t i = 0;
	int dot = 0;
	if (input[0] == '-')
		i++;
	for ( ; i < (input.length() - 1); i++)
	{
		if (input[i] == '.')
		{
			if (input[i + 1])
				dot++;
			else
				return false;
		}	
		if (!isdigit(input[i]) )
		{
			if (input[i] != '.')
				return false;
		}
	}
	if (dot == 1)
		return true;
	return false;
}


e_literals getType(std::string input)
{
	if (ifisChar(input) == 0)
		return None;
	else if (ifisChar(input) == 1)
		return Char;
	else if (ifisInt(input) == true)
		return Int;
	else if (ifisFloat(input) == true)
		return Float;
	else if (ifisDouble(input) == true)
		return Double;
	return None;
}

void convertChar(std::string number, char& c, int& i, float& f, double& d)
{
	
	c = number[0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
}

bool convertInt(std::string number, char& c, int& i, float& f, double& d)
{
	
	try
	{
		i = stoi(number);
		c = static_cast<char>(i);
		//std::cout << "c: " << c <<std::endl;
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	}
	catch(std::exception& e)
	{
		std::cout << "invalid int" << std::endl;
		return false;
	}
	return true;
}

bool convertFloat(std::string number, char& c, int& i, float& f, double& d)
{
	try
	{	
		f = stof(number);
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		d = static_cast<double>(f);
	}
	catch(std::exception& e)
	{
		std::cout << "invalid float" << std::endl;
		return false;
	}
	return true;
}

bool convertDouble(std::string number, char& c, int& i, float& f, double& d)
{
	try
	{
		d = stod(number);
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
	}
	catch(std::exception& e)
	{
		std::cout << "invalid double" << std::endl;
		return false;
	}
	return true;
}

void printResult(char& c, int& i, float& f, double& d)
{
	if (i >= 0 && i <= 255 && std::isprint(c))
		std::cout << "char: '" << c << "'"<< std::endl;
	else if (i >= 0 && i <= 31 )
		std::cout << "char: Non displayble "<< std::endl;
	else
		std::cout << "char: impossible" << std::endl;

	std::cout << "int: ";
	if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
		std::cout << i << std::endl;
	else
		std::cout << "impossible" << std::endl;
		
		

	if (i == d)
		std::cout << std::fixed << std::setprecision(1);
		
	
	std::cout << "float: " << f << "f"<< std::endl;
	std::cout << "double: " << d << std::endl;
}
	
	



void ScalarConverter::convert(std::string number)
{
	
	char c = 0;
	int i = 0; 
	float f = 0.0f; 
	double d = 0.0;
	
	e_literals type;
	
	type = getType(number);
	//std::cout << "type: " << type << std::endl;
	switch (type)
	{
		case Char:
			convertChar(number, c, i, f, d);
			break;
		case Int:
			if (convertInt(number, c, i, f, d) == false)
				return;
			break;
		case Float:
			if (convertFloat(number, c, i, f, d) == false)
				return;
			break;
		case Double:
			if (convertDouble(number, c, i, f, d) == false)
				return;
			break;
		default:
			std::cout << "invalid inpuuuut" << std::endl;
			return;
	}
	
	printResult(c, i, f, d);
}