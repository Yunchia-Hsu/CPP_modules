/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:11 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 14:36:17 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	this->_type = "default wrong animal";
    std::cout << "Default WrongAnimal constructor called. " << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal constructor called. " << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy constructor called. " << std::endl;
    *this = other;
}
WrongAnimal& WrongAnimal::operator= (const WrongAnimal& other)
{
    std::cout << "Animal copy assignment operator called. " << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;// why not other.gettype
    return *this;
}
void WrongAnimal::makeSound()const
{
    std::cout << "WrongAnimal " <<_type << " is not making any sound! " << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called. " << std::endl;
}
 
std::string WrongAnimal::getType() const
{
    return this->_type;
}