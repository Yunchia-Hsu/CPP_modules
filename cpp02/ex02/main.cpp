/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:09:54 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/24 23:13:58 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "\n---ADDITIONAL TESTS---";
	
	std::cout << "\nArithmetic operators:\n";
	Fixed	c(10);
	Fixed	d(2);
	std::cout << "c + d: " << (c + d) << std::endl; // should yield 12
	std::cout << "c - d: " << (c - d) << std::endl; // should yield 8
	std::cout << "c * d: " << (c * d) << std::endl; // should yield 20
	std::cout << "c / d: " << (c / d) << std::endl; // should yield 5
	Fixed	e(6.6f);
	Fixed	f(3.3f);
	std::cout << "e + f: " << (e + f) << std::endl; // should yield approx. 9.9
	std::cout << "e - f: " << (e - f) << std::endl; // should yield approx. 3.3
	std::cout << "e * f: " << (e * f) << std::endl; // should yield approx. 21.8
	std::cout << "e / f: " << (e / f) << std::endl; // should yield 2
	Fixed	zero(0);
	std::cout << "c / zero: " << (c / zero) << std::endl;
	return 0;
}