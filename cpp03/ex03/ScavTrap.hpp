/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:53:57 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 20:45:30 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#  define SCAVTRAP_HPP

#include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string _name);
		ScavTrap(const ScavTrap& other);//copy constrructor
		ScavTrap& operator = (const ScavTrap& other);
		~ScavTrap();
		void guardGate(void);
		void attack(const std::string& target) ;// instead of using the  attack in claptrap, here  is the new one 	
};


#endif
