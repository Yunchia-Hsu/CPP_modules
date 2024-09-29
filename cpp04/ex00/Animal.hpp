
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
        void makeSound();
        ~Animal();
        std::string get_type()const;//?
    
};

#endif