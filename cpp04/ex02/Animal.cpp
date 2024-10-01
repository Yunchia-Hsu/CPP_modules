/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:37 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 17:55:36 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"


Animal::Animal()
{
	this->_type = "default animal";
    std::cout << "Default Animal constructor called. " << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called. " << std::endl;
}
Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called. " << std::endl;
    *this = other;
}
Animal& Animal::operator= (const Animal& other)
{
    std::cout << "Animal copy assignment operator called. " << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;// why not other.gettype
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called. " << std::endl;
}
 
std::string Animal::getType() const
{
    return this->_type;
}