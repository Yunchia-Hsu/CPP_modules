/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:53:57 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 17:37:26 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#  define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string _name);
		ScavTrap(const ScavTrap& other);//copy constrructor
		ScavTrap& operator = (const ScavTrap& other);
		~ScavTrap() override;
		void guardGate(void);
		void attack(const std::string& target) override;// instead of using the  attack in claptrap, here  is the new one 	
};


#endif