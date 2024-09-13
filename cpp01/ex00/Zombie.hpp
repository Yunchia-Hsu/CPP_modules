/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:56:34 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/13 18:04:57 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;//Foo: BraiiiiiiinnnzzzZ...
	public:

		Zombie();
		~Zombie()
		{
			std::cout << Zombie has been destroyed << std::endl;
		}
		void announce( void ); 
		
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
}

#endif