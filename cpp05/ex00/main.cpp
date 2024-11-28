/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:39 by yhsu              #+#    #+#             */
/*   Updated: 2024/11/28 15:51:38 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// artificial nightmare of offices, corridors, forms, and waiting queues.
// exceptions

#include "Bureaucrat.hpp"


int main () 
{
  
	Bureaucrat mygrade("Grace", 30);
  
	try
	{
	throw 30;
	}
	catch (int e)
	{
	std::cout << "An exception occurred. Exception Nr. " << e << '\n';
	}
	catch(...)
	{
		std::cout << "exception happened" << std::end;
	}
  return 0;
}