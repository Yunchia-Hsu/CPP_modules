/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:31:30 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/24 10:35:22 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;	
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->setRawBits(other.getRawBits());
	}
	return *this;
}


int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits() member function called" << std::endl;
	return this->_fixedPointValue;
}


void Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}