

#include"PmergeMe.hpp"
#include <iostream> 






PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(PmergeMe const &from);
PmergeMe& PmergeMe::operator=(PmergeMe const &from);




void pmerge(int argc, char **argv)//3 5 9 7 4
{

//1.配對與初步比較：
//先將數字兩兩配對，比較後分出較大與較小的值（分別記作 𝑎 與 𝑏）。



//2.遞迴排序較大值：
//對所有 a 值進行排序，得到一條排序好的主鏈 S。  
//copy array a to temp
//go through whole temp array find the smallest and save it to s delete the number in  temp
//repeat the process until temp is empty
std::vector<int> a;



//3.分批插入 b 值：
//首先將與主鏈最小 
//a 相對應的 𝑏插入 𝑆的最前面。
//接著依據 Jacobsthal 數列決定的順序（例如先插入 𝑏3 
//​再插入 b1）使用二分搜尋將每個 b 插入到主鏈中，確保每次插入操作的搜尋區間長度理想，以達到較少的比較次數。



//4.處理剩餘未配對元素：
//最後，利用二分搜尋將未配對的元素插入到正確位置。






}