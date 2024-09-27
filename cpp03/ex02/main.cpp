/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:07:15 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 18:54:07 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void clap_test(void)
{
	ClapTrap clappy("Clappy");
	clappy.attack("a wolf");
	clappy.takeDamage(5);
	clappy.beRepaired(3);
}

void scav_test(void)
{
	ScavTrap scanny("Scanny");
	scanny.attack("a wolf");
	//scanny.takeDamage(5);
	//scanny.beRepaired(3);
	scanny.guardGate();
}

void frag_test(void)
{
	FragTrap frog("Frog");
	frog.attack("a wolf");
	//frog.takeDamage(5);
	//frog.beRepaired(3);
	frog.highFivesGuys();
}


int main ()
{
	std::cout << "\n~Wellcome to FragTrap~\n" << std::endl;
	
	std::cout << "\nHere is the test for ClapTrap class (base class)\n" << std::endl;
	clap_test();
	
	std::cout << "\n\nHere is the test for ScavTrap class (sub class)\n" << std::endl;
	scav_test();
	
	std::cout << "\n\nHere is the test for FragTrap class (sub class)\n" << std::endl;
	frag_test();	
	return 0;
}

