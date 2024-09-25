/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:07:10 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/25 13:30:46 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor initialezed." << std::endl;
}
ClapTrap::ClapTrap(std::string _name): _name(_name)
{
	this->_hitpoint = 10;
	this->_attackdamage = 0;
	this->_energypoint = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this == &other)
		return;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	// 當機器人攻擊目標時，這個函式會被呼叫。
	if (this->_energypoint != 0)
		this->_energypoint -= 1;
	else
		return;
// 機器人會對目標造成攻擊傷害（Attack damage）。
// 每次攻擊都會消耗 1 點能量值。
//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	std::cout << "ClapTrap " << _name << " attacks " << 
	
}

void ClapTrap::takeDamage(unsigned int amount);
// 當機器人受到傷害時，這個函式會被呼叫。
// 生命值（Hit points）會根據傷害值進行減少

void ClapTrap::beRepaired(unsigned int amount);
// 當機器人修復自己時，這個函式會被呼叫。
// 機器人的生命值會增加，並且每次修復都會消耗 1 點能量值。
// 修復後應顯示一條訊息來描述發生的事情。