/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:30:41 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/16 18:31:40 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	std::string zb_name;
	Zombie *new_zombie;
	
	std::cout << "Please name the zombie saved on the stack: \n"<< std::flush;
	getline(std::cin, zb_name);
	
	if (zb_name.empty())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
	}
	randomChump(zb_name);
	
	std::cout << "\nPlease name the zombie saved on the heap: \n"<< std::flush;
	getline(std::cin, zb_name);
	if (zb_name.empty())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << std::endl;
	}
	new_zombie = newZombie(zb_name);
	new_zombie-> announce();
	delete new_zombie;

	return 0;
}