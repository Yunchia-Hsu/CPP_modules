
#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "Default Animal constructor called. " << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called. " << std::endl;
}
Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called. " << std::endl;
    *this = other;
}
Animal& Animal::operator= (const Animal& other)
{
    std::cout << "Animal copy assignment operator called. " << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;// why not other.gettype
    return *this;
}
void Animal::makeSound()
{
    std::cout << "Animal " <<_type << " is not making any sound! " << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called. " << std::endl;
}
 
std::string Animal::get_type() const
{
    return this->_type;
}