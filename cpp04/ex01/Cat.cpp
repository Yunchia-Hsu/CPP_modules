/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:31 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 17:54:21 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    static int i = 0;
	this->_type = "Cat";
	this->_brain = new Brain();
    std::cout << "Default" << i++ <<  " Cat constructor called. " << std::endl;
	if (this->_brain == NULL)
	{
		perror("Cat brain cannot be allocated memory.");
		std::cerr << "Exit now" << std::endl;
		exit(1);
	}
}

Cat::Cat(Cat& other)
{
    std::cout << "Cat copy constructor called. " << std::endl;
    *this = other;
}
Cat& Cat::operator= (Cat& other)
{
    std::cout  << _type << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}
void Cat::makeSound() const
{
	std::cout  << _type << " mewwwww~~~" << std::endl;
}
Cat::~Cat()
{
    std::cout  << _type << " is dead ...> <... " << std::endl;
	delete _brain;
}
