/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:26:19 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/20 13:03:06 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"PmergeMe.hpp"
#include <iostream> 

t_pairVec PmergeMe::pairvec;//tell compiler to assign memory to pairvec
t_pairLst PmergeMe::pairlst;
PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(PmergeMe const &from)
{
    *this = from;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &from)
{
    (void) from;
    return *this;
}


bool PmergeMe::vec_pmerge(int argc, char **argv)//3 5 9 7 4
{
	auto vecSortStart = std::chrono::high_resolution_clock::now();
//1.pair up and compare numbers in each pair： 

   if (!pair(argc, argv))
        return false;
    t_intVec a (pairvec.size()); // a is the vector of the pairvec size
    std::transform(pairvec.begin(), pairvec.end(), a.begin(), [](t_pair p) {return p.first;});
    t_intVec b (pairvec.size()); // a is the vector of the pairvec size
    std::transform(pairvec.begin(), pairvec.end(), b.begin(), [](t_pair p) {return p.second;});

//2.sort vector a with bigger numbers in pairs and save them in vecotr S ：

    t_intVec s;             
    s.reserve(pairvec.size()); // create empty vector
    sort_a(a, s);

//3.insert numbers in vector b ：

    add_min_b(s, b);
//sort numbers in vector b according to Jacobsthal  numbers

    int js = 1;

	std::vector<bool> used(b.size(), false);  // track which b[i] was inserted

	while (true)
	{
		int jIndex = getJacobsthalNbr(js);  // or nextJacobsthalNbr(js, tot)
		if (jIndex >= (int)b.size())
			break;  // done

		// Insert b[jIndex] if not used yet:
		if (!used[jIndex])
		{
			int pos = std::upper_bound(s.begin(), s.end(), b[jIndex]) - s.begin();
			s.insert(s.begin() + pos, b[jIndex]);
			used[jIndex] = true;
		}
		js++;
	}

	// Then insert the leftover b[i]s that never got inserted above
	for (size_t i = 0; i < b.size(); i++)
	{
		if (!used[i])
		{
			int pos = std::upper_bound(s.begin(), s.end(), b[i]) - s.begin();
			s.insert(s.begin() + pos, b[i]);
			used[i] = true;
		}
	}


//4.handle the last number if there are odd numbers in the argv[1]：

    handle_odd_number(argc, argv, s);

	auto vecSortEnd = std::chrono::high_resolution_clock::now();
	double vecDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(vecSortEnd-vecSortStart).count();
	

	std::cout << "\033[0;34mAfter: \033[0m";
    for (int num : s)
        std::cout << num << " ";
    std::cout << std::endl;

	std::cout << "\033[0;34mTime to process a range of " << s.size() << " elements with std::vector : " << vecDuration/1000 << " us\033[0m" << std::endl;
	
    return true;
}


void PmergeMe::lst_pmerge(int argc, char **argv)
{
	auto vecSortStart = std::chrono::high_resolution_clock::now();
//1. pair numbers
	lst_pair(argc, argv);
	t_intLst a(pairlst.size());
	std::transform(pairlst.begin(), pairlst.end(), a.begin(), [](t_pair p){return p.first;});
	
	t_intLst b(pairlst.size());
	std::transform(pairlst.begin(), pairlst.end(), b.begin(), [](t_pair p){return p.second;});
	t_intLst s; // no need to assign memory to list like vector	
	sort_a_lst(a, s);	
	add_min_blst(s, b, pairlst);
			
//sort numbers in vector b according to Jacobsthal  numbers
    int guessIndex;
    int tot = s.size();
    int js = 1;
    for (auto it = b.begin(); it !=  b.end(); ++it)
    {
       
        guessIndex = PmergeMe::nextJacobsthalNbr(*it, js, tot);
   
    //​再插入 b1）使用二分搜尋將每個 b 插入到主鏈中，確保每次插入操作的搜尋區間長度理想，以達到較少的比較次數。
    //接著，利用 STL 的 upper_bound 找到 b[i] 在 s 中的正確插入位置
    //用 guessIndex 作初步猜測後，再局部搜尋
		auto startIt = std::next(s.begin(), guessIndex); // 從 s.begin() 向後移動 guessIndex 個位置
		auto targetIndex = std::upper_bound(startIt, s.end(), *it); 
			s.insert(targetIndex, *it);
    }
	
//4.handle the last number if there are odd numbers in the argv[1]：
    handle_odd_number_lst(argc, argv, s);
   
   	auto vecSortEnd = std::chrono::high_resolution_clock::now();
	double vecDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(vecSortEnd-vecSortStart).count();

	std::cout << "\033[35mTime to process a range of " << argc -1 << " elements with std::list : " << vecDuration/1000 << " us\033[0m" << std::endl;

    // std::cout << "\033[35mAfter List sort : \033[0m";
    // for (int num : s)
    //     std::cout << num << " ";
    // std::cout << std::endl;
		
}


