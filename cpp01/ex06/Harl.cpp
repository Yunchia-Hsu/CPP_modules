

#include "Harl.hpp"

using std::cout;
using std::endl;

void Harl::debug( void )
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger.\nI really do!" << endl;
}
void Harl::info( void )
{
    cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << endl;
}
void Harl::warning( void )
{
    cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << endl;
}

void Harl::error( void )
{
   cout << "This is unacceptable! I want to speak to the manager now." << endl;
}


void Harl::complain( std::string level )
{
    if (level.empty())
    {
        cout << "no Harl level!" << endl;
        return;
    }
    int levelnb = getLevel(level);
    if (levelnb == -1)
    {
        cout << " [ Probably complaining about insignificant problems ]" << endl;
        return;
    }
    c_func func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    if (levelnb < 4 && levelnb > -1)
    {
        
        int i = 0;
        while (i <= levelnb)
        {
            if (i == 0)
            cout << "[DEBUG]" << endl;
            if (i == 1)
            cout << "[INFO]" << endl;
            if (i == 2)
            cout << "[WARNING]" << endl;
             if (i == 3)
            cout << "[ERROR]" << endl;
            
            (this->*func[i])();
            cout<<endl;
            i++;
        }
    }
    else    
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    
}

int getLevel(std::string line)
{
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (line == level[i])
            return i;
        i++;
    }
    return -1;
}