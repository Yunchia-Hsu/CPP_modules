/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:46 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:23:54 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():_type("unknown type")
{
    std::cout << "AMateria has been created." << std::endl;
}

AMateria::AMateria(std::string const& type):_type(type)
{
    std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(AMateria& materia)
{
    std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria& AMateria::operator = (const AMateria& src)
{
    std::cout << "AMateria copy assignment operator called." << std::endl;
    if (this == &src)
        return *this;
    this->_type = src.getType();
    //*this = *src; ?? why not deep copy
    return *this;
}

AMateria::~AMateria()
{
   std::cout << "AMateria destructor called." << std::endl;
}
std::string const & AMateria::getType() const //Returns the materia type
{
    return this->_type;
}		
void AMateria::use(ICharacter& target)
{
    std::cout << "* AMateria abstractly used on " <<
    target.getName() << " *" << std::endl;
}