
#include "Harl.hpp"


int main()
{
    Harl harl;
    std::string line;
    
    std::cout << "please tell me what kind if command you want to pick!" << std::endl;
    std::cout << "Options are;\n (1)DEBUG\n (2)INFO\n (3)WARNING\n (4)ERROR\n";
    while (1)
    {  
        getline(std::cin, line);
        if (line.empty())
            std::cout << "You have nothing to complain? Really?!" << std::endl;
        else if (std::cin.eof()==true)
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << std::endl;
        }
        else
        {
            harl.complain(line);
            if (getLevel(line) != -1)
                break;
        }
        return 0;
    }
}