/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:26:28 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/07 15:25:33 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include <algorithm>
#include <iterator>



// define type aliases
using t_pair = std::pair <unsigned int , unsigned int>;

using t_pairVec = std::vector <t_pair>;
using t_intVec = std::vector <unsigned int>;
using t_intVecIter = t_intVec::iterator;

using t_pairLst = std::list<t_pair>;
using t_intLst = std::list<unsigned int>;
using t_intLstIter = t_intLst::iterator;






class PmergeMe
{
private:
// canonical form
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe const &from);
    PmergeMe& operator=(const PmergeMe &from);

   
    
public:  
//vector
	static t_pairVec pairvec;
    static t_intVec intvec;

    static bool vec_pmerge(int argc, char **argv);
    static int getJacobsthalNbr(int n);
    static bool jacobsthalNbr(int n);
    static int nextJacobsthalNbr(int n, int &js, int tot);
    static void handle_odd_number(int argc, char ** argv, t_intVec& s);
    static bool pair(int argc, char **argv);
    static void sort_a(t_intVec& a, t_intVec& s);
    static void add_min_b(t_intVec& s, t_intVec& b);

//list
	static t_pairLst pairlst;
    static t_intLst intlst;
    static void lst_pmerge(int argc, char **argv);

	static void sort_a_lst(t_intLst& a,t_intLst& s);
	static void lst_pair(int argc, char **argv);
	static void add_min_blst(t_intLst& s, t_intLst& b, t_pairLst& pairlst);
	static void handle_odd_number_lst(int argc, char ** argv, t_intLst& s);
};

bool input_check(int argc, char **argv);

#endif