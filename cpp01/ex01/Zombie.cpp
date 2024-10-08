/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:51:00 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 09:51:01 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() 
{
}

Zombie::~Zombie()
{
    std::cout<<"zombie: "<< this->_name<< " is dead!!!!" << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

std::string Zombie::get_name()
{
    return this->_name;
}

void Zombie::announce(void)
{
    if (this->_name.empty())
    {
        return;
    }
    std::cout << "zombie: " << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}