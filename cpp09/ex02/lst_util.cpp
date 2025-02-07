/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_util.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:32:00 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/07 17:27:06 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"
#include <iostream> 


void PmergeMe::lst_pair(int argc, char **argv)
{
	int range;
    if (argc % 2 == 0)
        range = argc -1;
    else
	{
        range = argc;
	}
	for(int i = 1; i < range; i = i+2)
    {  
        unsigned int n1 = std::stoi(argv[i]);
        unsigned int n2 = std::stoi(argv[i + 1]); 
        if (n1 > n2)
            pairlst.push_back (std::make_pair(n1, n2));// a 大, b小
        else
            pairlst.push_back (std::make_pair(n2, n1));
    }
}

void PmergeMe::sort_a_lst(t_intLst& a,t_intLst& s)
{
	if (a.empty())
		return;
	
	s.push_front(a.front());
	//unsigned int i;
	bool insert = false;
	for ( auto i =std::next(a.begin()); i != a.end() ; ++i)
    {
        for (auto j = s.begin(); j != s.end(); j++)
        {
            if ( *i< *j)
            {
                s.insert(j, *i);
                insert = true;
                break;
            }
        } 
        if (!insert)
            s.push_back(*i);
        insert = false;
    }
}


void PmergeMe::add_min_blst(t_intLst& s, t_intLst& b, t_pairLst& pairlst)
{
    
	
	for(auto i : pairlst)
    {
		if(i.first == s.front())
        {
			s.insert(s.begin(), i.second);
			for (auto it = b.begin(); it != b.end(); ++it)
			{
				if (*it == i.second)
					b.erase(it);
				break;
			}
				
        }
    }
  
}

void PmergeMe::handle_odd_number_lst(int argc, char ** argv, t_intLst& s)
{
	bool insert = false;	
    if ((argc -1)%2 != 0)//odd number
    {
        unsigned int last = std::stoi(argv[argc -1]);
        for (auto i = s.begin(); i != s.end(); ++i )
        {
            if (last < *i)
            {
                s.insert(i, last);
				insert = true;
                break;
            }
            
        }
		if (insert == false)
            s.push_back(last);
    }
}