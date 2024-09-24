/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:09:51 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/24 23:17:45 by yhsu             ###   ########.fr       */
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

////overloading arithmmetic operators
Fixed Fixed::operator+(const Fixed& other)
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other)
{
	return Fixed(this->toFloat() - other.toFloat());	
}

Fixed Fixed::operator*(const Fixed& other)
{
	return Fixed (this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other)
{
	if (other._fixedPointValue == 0)
	{
		std::cout << "Divisor cannot be 0 !!!" << std::endl;
		return 0;
	}
	return Fixed (this->toFloat() / other.toFloat());
}
////overloading comparison operators
bool Fixed::operator>(const Fixed& other)
{
	return (this->_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed& other)
{
	return (this->_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed& other)
{
	return (this->_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed& other)
{
	return (this->_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed& other)
{
	return (this->_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed& other)
{
	return (this->_fixedPointValue != other._fixedPointValue);
}
////overlodagin increment/ decrement operators	
//post increment
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_fixedPointValue = this->_fixedPointValue + 1;
	return temp;	 
}
//pre increment
Fixed& Fixed::operator++()
{
	this->_fixedPointValue = this->_fixedPointValue + 1;
	return *this;
}
//post decrement
Fixed Fixed::operator--(int)
{
	Fixed temp;
	this->_fixedPointValue -= 1;
	return temp;
}
//pre decrement
Fixed& Fixed::operator--()
{
	this->_fixedPointValue -= 1;
	return *this;
}

//overloaded menber function max, min
Fixed& Fixed::min(Fixed& nb1, Fixed& nb2)//return bigger one{
{
	if (nb1.getRawBits() < nb2.getRawBits())
		return nb1;
	return nb2;
}

const Fixed& Fixed::min(const Fixed& nb1, const Fixed& nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
		return nb1;
	return nb2;
}

Fixed& Fixed::max(Fixed& nb1, Fixed& nb2)//return smaller one
{
	if (nb1.getRawBits() > nb2.getRawBits())
		return (nb1);
	return (nb2);
}

const Fixed& Fixed::max(const Fixed& nb1, const Fixed& nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
		return (nb1);
	return (nb2);
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