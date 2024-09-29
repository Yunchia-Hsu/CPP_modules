
#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Default Dog constructor called. " << std::endl;
}
// Dog::Dog(std::string _type): _type("Dog")
// {
//     std::cout  << _type <<" constructor called. " << std::endl;
// }
Dog::Dog (const Dog& other):_type("Dog")
{
    std::cout << "Cat copy constructor called. " << std::endl;
    *this = other;
}
Dog& Dog::operator = (const Dog& other)
{
    std::cout  << _type << " copy assignment operator called. " << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}
void Dog::makeSound()
{
   std::cout  << _type << " baaaarkk~" << std::endl;
}
// std::string Dog::get_type()
// {
//     return this->_type;
// }
Dog::~Dog()
{
    std::cout  << _type << " is dead ...> <... " << std::endl;
}