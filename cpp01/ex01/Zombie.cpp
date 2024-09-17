
#include "Zombie.hpp"

Zombie::Zombie() 
{
}

Zombie::~Zombie()
{
    std::cout<<"zombie: "<< this->_name<< " is dead!!!!" << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

std::string Zombie::get_name()
{
    return this->_name;
}

void Zombie::announce(void)
{
    if (this->_name.empty())
    {
        return;
    }
    std::cout << "zombie: " << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}