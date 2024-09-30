/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:27 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 14:29:35 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    
    public:
        Cat();
        //Cat(std::string type);
        Cat (Cat& other);
        Cat& operator= (Cat& other);
        void makeSound()const override;
        ~Cat()override;
        //std::string get_type() const; 
    
};

#endif