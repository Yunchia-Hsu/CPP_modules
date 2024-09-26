/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:07:10 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/26 21:30:59 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitpoint(10), _attackdamage(0), _energypoint(10)
{
	std::cout << "Default constructor initialezed." << std::endl;
}
ClapTrap::ClapTrap(const std::string& _name): _name(_name), _hitpoint(10), _attackdamage(0), _energypoint(10)
{
	std::cout << "ClapTrap " << _name << " constructed.\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): _name(other._name), _hitpoint(other._hitpoint), _attackdamage(other._attackdamage), _energypoint(other._energypoint)
{
	std::cout << "ClapTrap " << _name << " copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	_name = other._name;
	_energypoint = other._energypoint;
	_hitpoint = other._hitpoint;
	_attackdamage = other._attackdamage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	
	if ( this->_hitpoint == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead.\n";
	}
	else if (this->_energypoint == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to attack.\n";
	}
	else 
	{
		this->_energypoint -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << 
		target << ", causing " << this->_attackdamage << " points of damage" << std::endl; 
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
	if (this->_energypoint == 0)
		std::cout << "ClapTrap " << this->_name << " has " << 
		_energypoint << " points, so "<< _name << " is dead."<<  std::endl; 
	else if (this->_hitpoint >= amount && this->_hitpoint > 0)
	{
		this->_hitpoint -= amount;
		std::cout << "ClapTrap " << _name << " lost " <<  amount
				<< " points of damage.\n";
	}
	else 
	{
		_hitpoint = 0;
		std::cout << "ClapTrap " << _name << " lost  " << _hitpoint 
			<< " points of damage.\n";
	}
	if (_hitpoint == 0)
		std::cout << "ClapTrap " << _name << " died.\n";
}


void ClapTrap::beRepaired(unsigned int amount)
{
	
	if (_energypoint == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to repair." << std::endl;
	}
	else if (_hitpoint == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead, not more movement can be done." << std::endl;
	}
	else 
	{
		this->_hitpoint += amount;
		this->_energypoint -= 1;
		std::cout << "ClapTrap " << this->_name << " repairs " << 
		amount << " points back." << std::endl;
	}

	
}
