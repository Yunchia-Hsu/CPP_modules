
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : virtual public Animal
{
    private:
        std::string _type;

    public:
        Cat();
        //Cat(std::string type);
        Cat (Cat& other);
        Cat& operator= (Cat& other);
        void makeSound();
        ~Cat();
        //std::string get_type() const; 
    
};

#endif