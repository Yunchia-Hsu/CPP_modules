/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:49:35 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 18:56:36 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitpoint = 100;
	_energypoint = 100;
	_attackdamage = 30;
	std::cout << "Default FragTrap is created!" << std::endl; 
}

FragTrap::FragTrap(const std::string _name): ClapTrap(_name)
{
	_hitpoint = 100;
	_energypoint = 100;
	_attackdamage = 30;
	std::cout << "FragTrap (Sub class of ClapTrap)" << this->_name << std::endl; 
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap (Sub class of ClapTrap) copy constructor constructed!" << std::endl;
}
FragTrap& FragTrap::operator = (FragTrap& other)
{
	if(this == &other)
		return *this;
	// call base class's copy assignment operator 
	ClapTrap::operator=(other);
	std::cout << "FragTrap copy assignment operator is called~" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap (Sub class of ClapTrap) " << this->_name << " destroyed." << std::endl; 
}

void FragTrap::attack(const  std::string& target)
{
	if ( this->_hitpoint == 0)
	{
		std::cout << "FragTrap " << _name << " destroyed.\n";
	}
	else if (this->_energypoint == 0)
	{
		std::cout << "FragTrap " << _name << " has no energy left to attack.\n";
	}
	else 
	{
		this->_energypoint -= 1;
		std::cout << "FragTrap " << this->_name << " attacks " << 
		target << ", causing " << this->_attackdamage << " points of damage!" << std::endl; 
	}
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " Let's hive Five  🙌 !!" <<  std::endl;
}
