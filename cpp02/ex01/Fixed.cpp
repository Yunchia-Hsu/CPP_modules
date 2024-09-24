/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:09:51 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/24 12:05:08 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) //initializes the fixed-point number value to 0.
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)//將浮點數的小數部分轉換為定點數
{
	std::cout << "Float constructor called" << std::endl;
	float rounded = roundf(value * (1 << this->_fractionalBits)); //將 1 的位元向左移動 8 位 = 256
	this->_fixedPointValue = static_cast<int>(rounded);// cast to int
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

// Copy assignment operator overload
Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->setRawBits(other.getRawBits());
	}
	return *this;
}

//member functions
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits() member function called" << std::endl;
	return this->_fixedPointValue;
}


void Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const//converts the fixed-point value to a floating-point value.
{
	return (static_cast<float>(this->_fixedPointValue) / (1 << this->_fractionalBits));
	
}

int Fixed::toInt( void ) const// converts the fixed-point value to an integer value.
{
	return (this->_fixedPointValue >> this->_fractionalBits);//>>右移運算
}

// Insertion («) operator overload
std::ostream& operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return stream;
}