/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:56:34 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/16 18:41:23 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>



class Zombie
{
	private:
		std::string _name;//Foo: BraiiiiiiinnnzzzZ...
	public:

		Zombie(std::string name);//constructor
		~Zombie();//destructor
		
		void set_name(std::string name);
		const std::string get_name(void) const;
		void announce(void); 
			
};

Zombie* newZombie( std::string name );//create zombie in heap
void randomChump( std::string name );//create zonbie in stack

#endif