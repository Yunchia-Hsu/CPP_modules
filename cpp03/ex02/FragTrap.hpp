/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:49:54 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/27 18:54:03 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

#include "ClapTrap.hpp"

#include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(const FragTrap& other);
		FragTrap& operator = (FragTrap& other);
		~FragTrap() override;
		void attack(const std::string& target) override;
		void highFivesGuys(void);	
};

#endif