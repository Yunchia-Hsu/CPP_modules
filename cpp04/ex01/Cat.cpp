/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:31 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/15 12:36:27 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    static int i = 0;
	this->_type = "Cat";
	std::cout << "Default " << i++ <<  " Cat constructor called. " << std::endl;
	this->_brain = new Brain();
    
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
    std::cout  <<  "Cat Assignation operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
	this->_brain = new Brain();
	
	if (this->_brain == nullptr)
	{
		perror("Cat brain cannot be allocated memory correctly in copy assignment operator.");
		exit(1);
	}
	*this->_brain = *other._brain;
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



void Cat::setIdea(int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

void Cat::getIdeas()const
{
	for (int i = 0; i < 5; i++)//you can change the number according to the idea numbers
	{
		std::cout << i << " cat's idea is: " << this->_brain->getIdea(i) << " at the address: " << this->_brain->getIdeaAddress(i) << std::endl;
	}
}