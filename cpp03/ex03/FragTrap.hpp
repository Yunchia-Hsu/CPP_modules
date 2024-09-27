/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:49:54 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 20:45:20 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

#include "ClapTrap.hpp"

#include <iostream>
// virtual inheritance 
class FragTrap : virtual public ClapTrap 
{
	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(const FragTrap& other);
		FragTrap& operator = (FragTrap& other);
		~FragTrap();
		void attack(const std::string& target) ;
		void highFivesGuys(void);	
};

#endif