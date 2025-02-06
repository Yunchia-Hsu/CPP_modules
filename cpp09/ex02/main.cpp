




#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include "PmergeMe.hpp"

bool input_check(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "invalig input: ./PmergeMe <numbers to sort>" << std::endl;
        return false;;
    }
    for (int i = 1 ; i < argc ; i++ )
    {
        if (!isdigit(*argv[i]) || std::stoi(argv[i]) < 0)
        {
            std::cerr << "Invalid input" << std::endl;
            return false;
        }
    }
    return true;
}

int main (int argc , char *argv[]) 
{
    if (!input_check(argc, argv))
        return 1;
    
    std::cout << "Before: ";
    for (int i = 1 ; i < argc ; i++ )
        std::cout << argv[i] << " ";
    std::cout << std::endl; 


    PmergeMe::vec_pmerge(argc, argv);
    //PmergeMe::lst_pmerge(argc, argv);
    return 0;
}



//std::chrono 或其他計時機制