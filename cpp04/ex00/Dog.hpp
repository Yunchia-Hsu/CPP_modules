
#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : virtual public Animal
{
    private:
        std::string _type;
    public:
        Dog();
        //Dog(std::string _type);
        Dog (const Dog& other);
        Dog& operator = (const Dog& other);
        void makeSound();
        //std::string get_type();
        ~Dog();

};


#endif