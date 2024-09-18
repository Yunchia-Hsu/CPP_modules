/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:42:17 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 17:23:20 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : name(name) , weapon(weapon)
{
}

HumanA::~HumanA()
{	
}

void HumanA::attack()//<name> attacks with their <weapon type>
{
	if (this->weapon.getType().empty())
		{
			std::cout << "Enter a weapon to attack" <<std::endl;
		}
	else
		std::cout << this->name << " attacks with their " 
			<<this->weapon.getType() << std::endl;
}