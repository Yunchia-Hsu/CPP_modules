/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:07:15 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/26 21:28:44 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	
	std::string enemy= "enemyy";
	
	std::cout << "\n~Wellcome to ClapTrap~\n" << std::endl;
	std::string rb_name;
	
	ClapTrap Apple("Apple");
	ClapTrap Orange("Orange");
	ClapTrap Banana("Banana");
	

	std::cout << "Orange energy: "<< Orange._energypoint << " Orange hit:" << Orange._hitpoint << " Orange attack: "<< Orange._attackdamage << std::endl;
	std::cout << "Apple energy: "<< Apple._energypoint << " Apple hit:" << Apple._hitpoint << " Apple attack: "<< Apple._attackdamage << std::endl;
	std::cout<<std::endl;
	Apple.attack("Orange");
	std::cout << "Orange energy: "<< Orange._energypoint << " Orange hit:" << Orange._hitpoint << " Orange attack: "<< Orange._attackdamage << std::endl;
	std::cout << "Apple energy: "<< Apple._energypoint << " Apple hit:" << Apple._hitpoint << " Apple attack: "<< Apple._attackdamage << std::endl;
	std::cout<<std::endl;
	Orange.takeDamage(5);
	std::cout << "Orange energy: "<< Orange._energypoint << " Orange hit:" << Orange._hitpoint << " Orange attack: "<< Orange._attackdamage << std::endl;
	std::cout<<std::endl;
	Orange.beRepaired(3);
	std::cout << "Orange energy: "<< Orange._energypoint << " Orange hit:" << Orange._hitpoint << " Orange attack: "<< Orange._attackdamage << std::endl;
	std::cout<<std::endl;
	Apple.attack("Orange");
	
	std::cout << "Apple energy: "<< Apple._energypoint << " Apple hit:" << Apple._hitpoint << " Apple attack: "<< Apple._attackdamage << std::endl;
	std::cout<<std::endl;
	Orange.takeDamage(10);
	std::cout << "Orange energy: "<< Orange._energypoint << " Orange hit:" << Orange._hitpoint << " Orange attack: "<< Orange._attackdamage << std::endl;

	std::cout<<std::endl;
	Orange.attack("Apple");
	std::cout<<std::endl;
	for (int i = 0; i < 10; i++)
		Apple.attack("Banana");
	
	return 0;
}

