/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:01 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 14:39:57 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << "Default WrongCat constructor called. " << std::endl;
}

WrongCat::WrongCat(WrongCat& other):_type("Cat")
{
    std::cout << "WrongCat copy constructor called. " << std::endl;
    *this = other;
}
WrongCat& WrongCat::operator= (WrongCat& other)
{
    std::cout  << _type << "Copy assignment operator called"<< std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}
void WrongCat::makeSound()const
{
	std::cout  << _type << " mewwwww~~~" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout  << _type << " is dead ...> <... " << std::endl;
}
