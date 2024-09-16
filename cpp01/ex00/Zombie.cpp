/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:00:58 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/16 18:49:29 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
/*
Zombie* newZombie( std::string name );
It creates a zombie, name it, and return it so you can use it outside of the function
scope.
*/

Zombie::Zombie(std::string name): _name(name)
{
	
}

Zombie::~Zombie()
{
	std::cout << "Zombie:" << this->_name<< " died!"<<std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
};

const std::string Zombie::get_name(void) const
{
	return (this->_name);
}


//creates a Zombie object on the stack
void Zombie::announce(void)
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ... "  << std::endl;
}
