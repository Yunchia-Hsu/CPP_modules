/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:27 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 15:23:34 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
		Brain* _brain;
	
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