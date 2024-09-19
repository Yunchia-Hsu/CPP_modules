
#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        void complain( std::string level );
};
int getLevel(std::string line);
typedef void (Harl::*c_func)(void);
#endif