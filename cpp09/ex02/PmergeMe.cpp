/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:26:19 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/07 17:18:52 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"PmergeMe.hpp"
#include <iostream> 

t_pairVec PmergeMe::pairvec;//tel compiler to assign memory to pairvec
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


	
//1.配對與初步比較：
//先將數字兩兩配對，比較後分出較大與較小的值（分別記作 𝑎 與 𝑏）。
   if (!pair(argc, argv))
        return false;
    t_intVec a (pairvec.size()); // a is the vector of the pairvec size
    std::transform(pairvec.begin(), pairvec.end(), a.begin(), [](t_pair p) {return p.first;});
    t_intVec b (pairvec.size()); // a is the vector of the pairvec size
    std::transform(pairvec.begin(), pairvec.end(), b.begin(), [](t_pair p) {return p.second;});

//2.遞迴排序較大值：
//對所有 a 值進行排序，得到一條排序好的主鏈 S。 

    t_intVec s;             // 建立空向量
    s.reserve(pairvec.size());
    sort_a(a, s);


//3.分批插入 b 值：
//首先將與主鏈最小 
//a 相對應的 𝑏插入 𝑆的最前面。
    add_min_b(s, b);
//接著依據 Jacobsthal 數列決定的順序
    //int guessIndex;
    int tot = s.size();
    int js = 1;
    for (size_t i = 0; i < b.size(); i++)
    {
		PmergeMe::nextJacobsthalNbr(b[i], js, tot);
    //​再插入 b1）使用二分搜尋將每個 b 插入到主鏈中，確保每次插入操作的搜尋區間長度理想，以達到較少的比較次數。
    // 接著，利用 STL 的 upper_bound 找到 b[i] 在 s 中的正確插入位置
    //當然，也可以利用 guessIndex 作初步猜測後，再局部搜尋）
        int targetIndex = std::upper_bound(s.begin(), s.end(), b[i]) - s.begin();
        s.insert(s.begin() + targetIndex, b[i]);
		tot = s.size();
    }

//4.處理剩餘未配對元素：
//最後，利用二分搜尋將未配對的元素插入到正確位置。
    handle_odd_number(argc, argv, s);

	auto vecSortEnd = std::chrono::high_resolution_clock::now();
	double vecDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(vecSortEnd-vecSortStart).count();
	std::cout << "\033[0;34mTime to process a range of " << s.size() << " elements with std::vector : " << vecDuration/1000 << " us\033[0m" << std::endl;

	std::cout << "\033[0;34mAfter Vector sort: \033[0m";
    for (int num : s)
        std::cout << num << " ";
    std::cout << std::endl;
    return true;
}


void PmergeMe::lst_pmerge(int argc, char **argv)
{
	auto vecSortStart = std::chrono::high_resolution_clock::now();
	// pair numbers
	lst_pair(argc, argv);
	t_intLst a(pairlst.size());
	std::transform(pairlst.begin(), pairlst.end(), a.begin(), [](t_pair p){return p.first;});
	
	t_intLst b(pairlst.size());
	std::transform(pairlst.begin(), pairlst.end(), b.begin(), [](t_pair p){return p.second;});
	t_intLst s; // no need to assign memory to list like vector	
	sort_a_lst(a, s);	
	add_min_blst(s, b, pairlst);
			
//接著依據 Jacobsthal 數列決定的順序
    //int guessIndex;
    int tot = s.size();
    int js = 1;
    for (auto it = b.begin(); it !=  b.end(); ++it)
    {
       // std::cout << "b[" << i<< "]" << b[i] << std::endl;
       // guessIndex = PmergeMe::nextJacobsthalNbr(b[i], js, tot);
        PmergeMe::nextJacobsthalNbr(*it, js, tot);
   
    //​再插入 b1）使用二分搜尋將每個 b 插入到主鏈中，確保每次插入操作的搜尋區間長度理想，以達到較少的比較次數。
    // 接著，利用 STL 的 upper_bound 找到 b[i] 在 s 中的正確插入位置
    //當然，也可以利用 guessIndex 作初步猜測後，再局部搜尋）
        auto targetIndex = std::upper_bound(s.begin(), s.end(), *it);
        //std::cout << "最終決定插入位置 targetIndex = " << targetIndex << std::endl;
        s.insert(targetIndex, *it);
    }
	
//4.處理剩餘未配對元素：
//最後，利用二分搜尋將未配對的元素插入到正確位置。
    handle_odd_number_lst(argc, argv, s);
   

   	auto vecSortEnd = std::chrono::high_resolution_clock::now();
	double vecDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(vecSortEnd-vecSortStart).count();
	std::cout << "\033[35mTime to process a range of " << s.size() << " elements with std::list : " << vecDuration/1000 << " us\033[0m" << std::endl;

    std::cout << "\033[35mAfter List sort : \033[0m";
    for (int num : s)
        std::cout << num << " ";
    std::cout << std::endl;
		
}

