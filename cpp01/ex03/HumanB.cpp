/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:42:12 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 17:31:23 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
}
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	std::cout << "in setweapon humanb\n";
	if (weapon.getType().empty())
	{
		std::cout << "Please provide a weapon." << std::endl;
		return ;	
	}
	
	this->weapon = &weapon;
	
}



void HumanB::attack()//<name> attacks with their <weapon type>
{
	
	if (! this->weapon|| this->weapon->getType().empty())
	{
		std::cout << "Please provide a weapon to attack!" << std::endl;
		return;	
	}
	
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
		
}