/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:41:27 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/03 20:58:05 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <>

enum e_literals
{
	Char,
	Int,
	Float,
	Double,
	None,
}

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


char
	int
	float
	double

// std::stof() – convert string to float
// std::stod() – convert string to double
// std::atof() – convert a char array to double
// std::to_string – convert any data type number to string