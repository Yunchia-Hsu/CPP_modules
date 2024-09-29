
#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "Default Cat constructor called. " << std::endl;
}
// Cat::Cat(std::string type): _type("Cat")
// {
//     std::cout << type <<" constructor called. " << std::endl;
// }
Cat::Cat(Cat& other):_type("Cat")
{
    std::cout << "Cat copy constructor called. " << std::endl;
    *this = other;
}
Cat& Cat::operator= (Cat& other)
{
    std::cout  << _type << _type << "mewwwww~" << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}
void Cat::makeSound()
{
 
}
Cat::~Cat()
{
    std::cout  << _type << " is dead ...> <... " << std::endl;
}

// std::string Cat::get_type() const
// {
//     return this->_type;
// }