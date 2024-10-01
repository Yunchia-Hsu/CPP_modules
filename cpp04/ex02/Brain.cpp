/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:55:05 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 15:26:44 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//std::string ideas[100]; 


Brain::Brain()
{
	std::cout << "Default Brain constructor called. " << std::endl;
}
Brain::Brain(const Brain& other)
{
	std::cout << "Default Dog constructor called. " << std::endl;
	*this = other;
}
Brain& Brain::operator = (const Brain& other)
{
	std::cout << "Brain copy assignment operator called. " << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		
		if (other._ideas[i].length() > 0)
			this->_ideas[i] = other._ideas[i];
	}
	
	return *this;
}
Brain::~Brain()
{
	std::cout << "Brain destructor called. " << std::endl;
}

const std::string Brain::getIdea(int i)const
{
	if (i < 100)
	{
		//std::cout << "the idea is: " << this->_ideas[i] << " and the address is: " << getIdeaAddress(i) <<  std::endl; 
		return (this->_ideas[i]);
	}
	
	return ("Sorry, you cannot have more than 100 IDEAS.");
}

const std::string *Brain::getIdeaAddress(int i) const
{
	if (i < 100)
	{
		const std::string &stringReferance = this->_ideas[i];
		return &stringReferance;
	}
	else 
		return NULL;
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 100 && i >= 0)
		this->_ideas[i] = idea;	
	else
		std::cout<< "Sorry, you cannot have more than 100 IDEAS." << std::endl;
}