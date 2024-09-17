
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        void set_name(std::string name);
        std::string get_name();
        void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif