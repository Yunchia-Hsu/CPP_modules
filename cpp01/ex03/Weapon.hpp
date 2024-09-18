/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:41:59 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 16:09:12 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon 
{
	private:
		std::string Type;

	public:
		
		Weapon(std::string type); 
		~Weapon();
		
		void setType(std::string type);
		const std::string &getType();//a const reference to type.
		
};

#endif