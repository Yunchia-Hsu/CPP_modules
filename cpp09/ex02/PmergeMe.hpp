#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include <algorithm>



// define type aliases
    using t_pair = std::pair <unsigned int , unsigned int>;

    using t_pairVec = std::vector <t_pair>;
    using t_intVec = std::vector <unsigned int>;//why?
    using t_intVecIter = t_intVec::iterator;






class PmergeMe
{
public:
// canonical form
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe const &from);
    PmergeMe& operator=(const PmergeMe &from);

    static t_pairVec pairvec;
    static t_intVec intvec;
    
public:  
    static bool vec_pmerge(int argc, char **argv);
    static int getJacobsthalNbr(int n);
    static bool jacobsthalNbr(int n);
    static int nextJacobsthalNbr(int n, int &js, int tot);
    static void handle_odd_number(int argc, char ** argv, t_intVec& s);
    static bool pair(int argc, char **argv);
    static void sort_a(t_intVec& a, t_intVec& s);
    static void add_min_b(t_intVec& s, t_intVec& b);
 
};

#endif