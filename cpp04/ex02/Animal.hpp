/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:34 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 17:47:21 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(std::string type);
        Animal (const Animal& other);
        Animal& operator= (const Animal& other);
        virtual void makeSound() const = 0;//make it pure virtual function.
        virtual ~Animal();
        std::string getType()const;
    
};

#endif