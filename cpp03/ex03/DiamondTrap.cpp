/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:01:06 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/09 17:16:26 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)// scav and then frag the order matters
{
	*this = other;
	std::cout << "DiamondTrap (Sub class of Scav n Frag) copy constructor constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_trap")
{
	this->_name = name;
	this->_hitpoint = FragTrap::_hitpoint;
	this->_energypoint = 50;//fragtrp will overlap the value
	this->_attackdamage = FragTrap:: _attackdamage;
	
	std::cout << "DiamondTrap " <<_name << " constructed! "<<std::endl; 
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap " << _name << " Assignation operator called.\n";
	if (this== &other)
		return *this;
	else
	{
		this->_name = other._name + "_clap_trap";
		this->_hitpoint = FragTrap::_hitpoint;
		this->_energypoint = 50;//fragtrp will overlap the value
		this->_attackdamage = FragTrap:: _attackdamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap (Sub class of Scav n Frag) " << this->_name << " destroyed." << std::endl; 
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}