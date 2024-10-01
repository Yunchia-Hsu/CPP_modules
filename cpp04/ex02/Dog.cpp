/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:24 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 16:00:36 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    static int i = 0;
	this->_type = "Dog";
	this->_brain = new Brain();
    std::cout << "Default " << i++ <<" Dog constructor called. " << std::endl;
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
    std::cout  << _type << "Dog Assignation operator called " << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror ("Cat cannot allocate memory correctly in copy assignment operator.");
		exit (1);
	}	
	*this->_brain = *other._brain;//deep copy allocate new memory and copy the value ; * is for _brain not for this or other
    return *this; 
}
void Dog::makeSound() const
{
   std::cout  << _type << " baaaarkk~" << std::endl;
}

Dog::~Dog()
{
    std::cout  << _type << " is dead ...> <... " << std::endl;
	delete _brain;
}

void Dog::setIdea(int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

void Dog::getIdeas()const
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << " dog's idea is: " << this->_brain -> getIdea(i) << " at the address: " << this->_brain->getIdeaAddress(i)<< std::endl;
	}
}
		