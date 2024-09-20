/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:44:10 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/20 15:38:03 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _gractionalBits = 8; 

	public:
		Fixed(); //initializes the fixed-point number value to 0.
		~Fixed();

		Fixed(const Fixed &original);//copy constructor
		Fixed &operator=(const Fixed &original);//Copy assignment operator
					
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};



#endif