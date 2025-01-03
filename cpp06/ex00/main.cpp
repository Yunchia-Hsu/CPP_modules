/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:41:33 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/03 20:33:02 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char*argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong argument number. Please put ./ScalarConverter <value>" << std::endl;
		return (1);
	}	
		
	ScalarConverter::convert(argv[1]);
	return (0);
	
}