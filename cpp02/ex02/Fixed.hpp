/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:09:43 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/24 23:19:14 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath> //roundf 

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8; 

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed(const Fixed &other);//copy constructor
		
		//Copy assignment operator
		Fixed& operator=(const Fixed &other);
		////overloading arithmmetic operators
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);
		////overloading comparison operators
		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);
		////overlodagin increment/ decrement operators	
		Fixed operator++(int);
		Fixed& operator++();
		Fixed operator--(int);
		Fixed& operator--();
		
		//overloaded menber function max, min
		static Fixed& min(Fixed& nb1, Fixed& nb2);
		static const Fixed& min(const Fixed& nb1, const Fixed& nb2);
		static Fixed& max(Fixed& nb1, Fixed& nb2);
		static const Fixed& max(const Fixed& nb1, const Fixed& nb2);
				
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;//converts the fixed-point value to a floating-point value.
		int toInt( void ) const;// converts the fixed-point value to an integer value.
		
};

std::ostream& operator<<(std::ostream &stream, const Fixed &nbr);

#endif