/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:07:15 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 17:46:30 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	
	std::cout << "\n~Wellcome to ScavTrap~\n" << std::endl;
	
	
	ScavTrap Apple("[Apple]");
	ScavTrap Orange("[Orange]");
	

	Apple.attack("[Orange]");
	
	Orange.takeDamage(5);
	
	Orange.beRepaired(3);
	
	Apple.attack("[Orange]");
	
	Orange.takeDamage(10);

	Orange.attack("[Apple]");
	
	
	
	return 0;
}

