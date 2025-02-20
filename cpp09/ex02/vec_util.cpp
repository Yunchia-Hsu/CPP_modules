/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_util.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:26:36 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/20 13:05:33 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"PmergeMe.hpp"
#include <iostream> 


int PmergeMe::getJacobsthalNbr(int n)// 遞迴計算第 n 個 Jacobsthal 數
{

	if (n == 0) return 0;
    if (n == 1) return 1;
    
    int j0 = 0;  // J(0)
    int j1 = 1;  // J(1)
    int jn = 0;
    for (int i = 2; i <= n; i++) {
        jn  = j1 + 2 * j0;
        j0  = j1;
        j1  = jn;
    }
    return jn;
}


// bool PmergeMe::jacobsthalNbr(int n) 
// {
//     int i = 0;
//     for (;;)
//     {
//         int jVal = getJacobsthalNbr(i);
//         if (jVal == n) return true;
//         if (jVal > n)  return false;
//         i++;
//     }
// }


int PmergeMe::nextJacobsthalNbr(int currentIndex, int &js, int tot) 
{    
	(void)currentIndex;
    int guess = getJacobsthalNbr(js) - 1;
    if (guess >= tot) {
        return tot;  // 如果預測值超出主鏈範圍，就返回 tot（代表插入到尾端）
    }
    // 更新 js 以便下次取得 Jacobsthal 數列中的下一個數
    js++;
    return guess;
}


void PmergeMe::handle_odd_number(int argc, char ** argv, t_intVec& s)
{
    if ((argc -1)%2 != 0)//odd number
    {
        unsigned int last = std::stoi(argv[argc -1]);
        for (unsigned int i = 0; i < s.size(); i++ )
        {
            if (last < s[i])
            {
                s.insert(s.begin() + i, last);
                break;
            }
            if (i == (unsigned int)(argc - 3))
                s.push_back(last);
        }
    }  
}

bool PmergeMe::pair(int argc, char **argv)
{
    
	
	int range;
    if (argc % 2 == 0)//check odd or even numbers in the vector
        range = argc -1;
    else
        range = argc;
    for (int i = 1; i < range; i = i+2)
    {   
        unsigned int n1 = std::stoi(argv[i]);
        unsigned int n2 = std::stoi(argv[i + 1]); 
        if (n1 > n2)
            pairvec.push_back (std::make_pair(n1, n2));// a 大, b小
        else
            pairvec.push_back (std::make_pair(n2, n1));
    }
	
    return true;
}

void PmergeMe::sort_a(t_intVec& a, t_intVec& s)
{
	s.push_back(a[0]);
    unsigned int i;
    bool insert = false; // handle a[i] is smaller than s[0]
    for ( i = 1; i < a.size(); i++)
    {
        for (unsigned int j = 0; j < s.size(); j++)
        {
            if ( a[i]< s[j])
            {
                s.insert(s.begin() + j, a[i]);
                insert = true;
                break;
            }
        } 
        if (!insert)
            s.push_back(a[i]);
        insert = false;
    }
}

void PmergeMe::add_min_b(t_intVec& s, t_intVec& b)
{
    for(unsigned int i = 0; i < s.size(); i++)
    {
    	if(pairvec[i].first ==  s[0])
        {
			s.insert(s.begin(),pairvec[i].second);
			b.erase(b.begin() + i);
			break;
        }
    }

}
