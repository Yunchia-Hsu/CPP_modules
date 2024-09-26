/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:51:09 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/26 16:43:26 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )//create n zombies
{
    int i = 0;
    Zombie *zombies;

    if (N < 1)
    {
        std::cout << "N needs to be greater than 1, please try again" << std::endl;
        return NULL;
    }
	try
	{
		zombies = new Zombie[N];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "malloc error" << std::endl; 
		return (nullptr);
	}
    zombies = new Zombie[N];
	
    while(i < N)
    {
        zombies[i].set_name(name);
        i++;
    }
    return zombies;
}