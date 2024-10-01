/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:27 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 15:57:38 by yhsu             ###   ########.fr       */
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
		void setIdea(int i, std::string idea);
		void getIdeas()const ;
    
};

#endif