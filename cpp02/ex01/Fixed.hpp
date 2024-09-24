/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:09:43 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/24 12:13:14 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath> //roundf 對浮點數進行「四捨五入」

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8; 

	public:
		Fixed();
		Fixed(const int value); //initializes the fixed-point number value to 0.
		Fixed(const float value);
		~Fixed();

		Fixed(const Fixed &other);//copy constructor
		Fixed& operator=(const Fixed &other);//Copy assignment operator
					
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;//converts the fixed-point value to a floating-point value.
		int toInt( void ) const;// converts the fixed-point value to an integer value.
		
};

std::ostream& operator<<(std::ostream &stream, const Fixed &nbr);

#endif