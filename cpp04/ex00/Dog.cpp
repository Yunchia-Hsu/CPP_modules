/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:24 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 14:30:55 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Default Dog constructor called. " << std::endl;
}
// Dog::Dog(std::string _type): _type("Dog")
// {
//     std::cout  << _type <<" constructor called. " << std::endl;
// }
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
}