/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:51:05 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 09:51:06 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        void set_name(std::string name);
        std::string get_name();
        void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif