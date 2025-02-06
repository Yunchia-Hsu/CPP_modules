
#include"PmergeMe.hpp"
#include <iostream> 



int PmergeMe::getJacobsthalNbr(int n)// 遞迴計算第 n 個 Jacobsthal 數
{
    if (n ==0 || n == 1)
        return n;
    else
        return getJacobsthalNbr(n-1) + 2*getJacobsthalNbr(n-2);
}
bool PmergeMe::jacobsthalNbr(int n) // 判斷 nbr 是否為 Jacobsthal 數
{
    int number = 0;
    while(getJacobsthalNbr(number) < n)
    {
        number++;
    }
    return getJacobsthalNbr(number) == n;

}
// 根據當前情況決定下一個“試探”的插入索引
// nbr：當前參考的數值（通常可以設為主數列長度 tot）
// jS：Jacobsthal 序號（外部記錄，會在此函式中更新）
// tot：主數列當前的元素總數
int PmergeMe::nextJacobsthalNbr(int n, int &js, int tot)
{
   //std::cout << "n: "<< n << " js: " << js << " tot: " << tot << std::endl;
    if (!getJacobsthalNbr(n))// // 若 nbr 不是 Jacobsthal 數，則退回一步
        return n -1;
    if (n + 1 == tot || getJacobsthalNbr(js) >= tot)//// 若 nbr+1 等於 tot 或當前 jS 所對應的 Jacobsthal 數大於等於 tot，則返回 tot（代表末尾）
        return tot;
    // 否則，更新 jS（使用下一個 Jacobsthal 數）並返回 min( J(jS) - 1, tot - 1)
    return std::min(getJacobsthalNbr(++js) -1, tot-1);
}


void PmergeMe::handle_odd_number(int argc, char ** argv, t_intVec& s)
{
    if ((argc -1)%2 != 0)//odd number
    {
        unsigned int last = std::stoi(argv[argc -1]);
        //std::cout << "last: " << last << std::endl;
        //s.insert(std::upper_bound(s.begin(), s.end(), last), last);
        for (unsigned int i = 0; i < s.size(); i++ )
        {
            if (last < s[i])
            {
                // std::cout << "last: " << last <<"i: "<< i<< "s[i]:" << s[i]<<std::endl;
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
    if (argc % 2 == 0)//確認數字是奇數個還是偶數個
        range = argc -1;
    else
        range = argc;
    for (int i = 1; i < range; i = i+2)
    {
        if (!isdigit(*argv[i]) || !isdigit(*argv[i+1]))
        {
            std::cerr << "Invalid input" << std::endl;
            return false;
        }
            
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
    // std::cout <<"\ns vector"<< std::endl;
    // for (unsigned int x : s) {
    //     std::cout << x << " ";
    // }
    std::cout << std::endl; 
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
    //std::cout <<"\ns vector after added one b"<< std::endl;
    // for (unsigned int x : s) {
    //     std::cout << x << " ";
    // }
    // std::cout << std::endl; 
    // std::cout <<"\nb vector"<< std::endl;
    // for (unsigned int x : b) {
    //     std::cout << x << " ";
    // }
    // std::cout << std::endl; // 輸出: 1 3 5
}
