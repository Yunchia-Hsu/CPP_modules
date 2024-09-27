/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:54:03 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 17:48:03 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	_hitpoint = 100;
	_energypoint = 50;
	_attackdamage = 20;
	
	std::cout << "Default ScavTrap is created!" << std::endl; 
}

ScavTrap::ScavTrap(const std::string _name):ClapTrap(_name)
{
	_hitpoint = 100;
	_energypoint = 50;
	_attackdamage = 20;
	
	std::cout << "ScavTrap (Sub class of ClapTrap)" << this->_name << " constructed!" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap (Sub class of ClapTrap) copy constructor constructed!" << std::endl;
}


ScavTrap& ScavTrap::operator = (const ScavTrap& other)
{
	if (this == &other)
		return *this;
	else
	{
		this->_name = other._name;
		this->_hitpoint = other._hitpoint;
		this->_attackdamage = other._energypoint;
		this->_energypoint = other._energypoint;
	}
	std::cout << "ScavTrap copy assignment operator is called~" << std::endl;
	return *this;	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap (Sub class of ClapTrap) " << this->_name << " destroyed" << std::endl; 
}

void  ScavTrap::guardGate()
{
	std::cout << "Now you are in Gate keeper mode!~" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if ( this->_hitpoint == 0)
	{
		std::cout << "ScavTrap " << _name << " destroyed.\n";
	}
	else if (this->_energypoint == 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy left to attack.\n";
	}
	else 
	{
		this->_energypoint -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << 
		target << ", causing " << this->_attackdamage << " points of damage!" << std::endl; 
	}
}