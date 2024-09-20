/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:58:04 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/20 10:58:05 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"

using std::cout;
using std::endl;

void Harl::debug( void )
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << endl;
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
        cout << "Complaint is not correct please try again." << endl;
        return;
    }
    c_func func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    if (levelnb < 4 && levelnb > -1)
        (this->*func[levelnb])();
    else    
        cout << "invalid level; " << levelnb << endl;
    
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