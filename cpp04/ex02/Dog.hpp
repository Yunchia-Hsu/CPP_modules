/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:20 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 15:53:08 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog :  public Animal
{
    private:
		Brain*_brain;
    public:
        Dog();
        Dog (const Dog& other);
        Dog& operator = (const Dog& other);
        void makeSound()const override;
        //std::string get_type();
        ~Dog()override;
		void setIdea(int i, std::string idea);
		void getIdeas()const;
		

};


#endif