/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:42:15 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 17:10:01 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;

	public:
		
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
		
};

#endif