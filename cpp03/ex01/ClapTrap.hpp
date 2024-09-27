/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:07:05 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 17:44:53 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#  define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hitpoint;//10
		unsigned int _attackdamage;//0
		unsigned int _energypoint;//10
	public:
	ClapTrap();
	ClapTrap(const std::string& _name);
	virtual ~ClapTrap();//  can be overrided by the function in derived class with virtual
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
} ;




#endif

