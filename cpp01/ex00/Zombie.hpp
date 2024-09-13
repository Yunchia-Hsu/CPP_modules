/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:56:34 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/13 18:49:56 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;//Foo: BraiiiiiiinnnzzzZ...
	public:

		Zombie(std::string _name);
		~Zombie();
		
		void set_name(std::string name);
		const std::string get_name(void) const;
		void announce( void ); 
		
		
}

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif