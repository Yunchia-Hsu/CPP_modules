#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <iostream>
#include <vector>
#include <list>
#include <chrono>

class PmergeMe
{
public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe const &from);
    PmergeMe &operator=(PmergeMe const &from);


    
    
    static void pmerge(int argc, char **argv);

};

#endif