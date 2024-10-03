/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:32 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:20:33 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Cure has been created." << std::endl;
}
Cure::~Cure()
{
    std::cout << "Cure destructor called at address" << this << std::endl;
}
Cure::Cure (const Cure& src): AMateria("cure")
{
    std::cout << "Cure copy constructor called." << std::endl;
    this->_type = src._type;
}
Cure& Cure::operator = (const Cure& src)
{
	 std::cout << "Cure copy assignment operator called." << std::endl;
    if (this == &src)
        return *this;
    this->_type = src._type;
    
    return *this;

}
AMateria* Cure::clone()const
{ 
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals" << target.getName <<
     "'s wounds *" << std::endl;
}