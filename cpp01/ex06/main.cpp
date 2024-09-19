

#include "Harl.hpp"

int main(int argc, char **argv)
{
    
    if (argc != 2)
    {
        std::cout <<"Please enter an argument." << std::endl;
        std::cout << "Options are;\n (1)DEBUG\n (2)INFO\n (3)WARNING\n (4)ERROR\n";
        return 1;
    }
    Harl harl;
    std::string line = argv[1];

    harl.complain(line);
    return 0;
    
}