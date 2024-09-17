
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )//create n zombies
{
    int i = 0;
    Zombie *zombies;

    if (N < 1)
    {
        std::cout << "N needs to be greater than 1, please try again" << std::endl;
        return NULL;
    }
    zombies = new Zombie[N];
    while(i < N)
    {
        zombies[i].set_name(name);
        i++;
    }
    return zombies;
}