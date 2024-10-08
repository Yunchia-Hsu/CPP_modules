/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:07:15 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 13:54:22 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	
	std::cout << "\n~Wellcome to ClapTrap~\n" << std::endl;
	
	ClapTrap Apple("Apple");
	ClapTrap Orange("Orange");
	ClapTrap Banana("Banana");
	

	Apple.attack("Orange");
	
	Orange.takeDamage(5);
	
	Orange.beRepaired(3);
	
	Apple.attack("Orange");
	
	Orange.takeDamage(10);

	Orange.attack("Apple");
	
	std::cout<<std::endl;//see when energy is 0 , does attack stop
	for (int i = 0; i < 10; i++)
		Apple.attack("Banana");
	
	return 0;
}

