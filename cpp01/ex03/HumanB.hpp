/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:42:09 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 17:18:31 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		
		void setWeapon(Weapon &weapon);
		
		void attack();//<name> attacks with their <weapon type>
		
};





#endif