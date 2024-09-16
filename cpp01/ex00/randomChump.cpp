/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:09:39 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/16 18:31:12 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	if (name.empty())
	{
		std::cout << "Please name the zombie~" << std::endl;
	}
	Zombie Zombiee(name);
	Zombiee.announce();
}
