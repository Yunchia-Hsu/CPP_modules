/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:25 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 18:20:26 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("Ice")
{
    std::cout << "Ice has been created." << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called at address" << this << std::endl;
}

Ice::Ice(const Ice& src):AMateria("Ice")
{
    std::cout << "Ice copy constructor called." << std::endl;
    this->_type = src._type;
}

Ice& Ice::operator = (const Ice& src);
{
    std::cout << "Ice copy assignment operator called." << std::endl;
    if (this == &src)
        return *this;
    this->_type = src._type;
    return *this;
}
//Ice 類：use() 函數會顯示 "* shoots an ice bolt at <name> *"。
void Ice::use(ICharater& target)
{
    std::cout << "* shoots an ice bolt at " << 
    target.getName() << " *" << std::endl;
}

//clone() 函數都會返回一個相同類型的新實例。
AMateria* Ice::clone()const
{
    return (new Ice(*this))
}