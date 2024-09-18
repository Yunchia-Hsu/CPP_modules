/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:42:02 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 16:09:23 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : Type(type)
{
}

Weapon::~Weapon()
{
}


void Weapon::setType(std::string type)
{
	this->Type = type;
}
const std::string & Weapon::getType()
{
	return this->Type;
}