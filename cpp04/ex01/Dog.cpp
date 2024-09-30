/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:24 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 17:54:38 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
	this->_brain = new Brain();
    std::cout << "Default Dog constructor called. " << std::endl;
	if (this->_brain == NULL)
	{
		perror ("Dog brain cannot be allocated.");
		std::cerr << "Exit now." << std::endl;
		exit(1);
	}
}

Dog::Dog (const Dog& other)
{
    std::cout << "Cat copy constructor called. " << std::endl;
    *this = other;
}
Dog& Dog::operator = (const Dog& other)
{
    std::cout  << _type << " copy assignment operator called. " << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}
void Dog::makeSound() const
{
   std::cout  << _type << " baaaarkk~" << std::endl;
}

Dog::~Dog()
{
    std::cout  << _type << " is dead ...> <... " << std::endl;
	delete _Brain;
}