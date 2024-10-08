/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:20 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 14:30:15 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog :  public Animal
{
    
    public:
        Dog();
        //Dog(std::string _type);
        Dog (const Dog& other);
        Dog& operator = (const Dog& other);
        void makeSound()const override;
        //std::string get_type();
        ~Dog()override;

};


#endif