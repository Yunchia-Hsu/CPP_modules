/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:42:46 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/20 15:53:25 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;//default constructor

	Fixed b( a );// copy constructor
	
	Fixed c;
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	
	std::cout << b.getRawBits() << std::endl;

	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}
