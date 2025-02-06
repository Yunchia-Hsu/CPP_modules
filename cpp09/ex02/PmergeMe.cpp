

#include"PmergeMe.hpp"
#include <iostream> 

t_pairVec PmergeMe::pairvec;//tel compiler to assign memory to pairvec
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

// int PmergeMe::getJacobsthalNbr(int n)// 遞迴計算第 n 個 Jacobsthal 數
// {
//     if (n ==0 || n == 1)
//         return n;
//     else
//         return getJacobsthalNbr(n-1) + 2*getJacobsthalNbr(n-2);
// }
// bool PmergeMe::jacobsthalNbr(int n) // 判斷 nbr 是否為 Jacobsthal 數
// {
//     int number = 0;
//     while(getJacobsthalNbr(number) < n)
//     {
//         number++;
//     }
//     return getJacobsthalNbr(number) == n;

// }
// // 根據當前情況決定下一個“試探”的插入索引
// // nbr：當前參考的數值（通常可以設為主數列長度 tot）
// // jS：Jacobsthal 序號（外部記錄，會在此函式中更新）
// // tot：主數列當前的元素總數
// int PmergeMe::nextJacobsthalNbr(int n, int &js, int tot)
// {
//     std::cout << "n: "<< n << " js: " << js << " tot: " << tot << std::endl;
//     if (!getJacobsthalNbr(n))// // 若 nbr 不是 Jacobsthal 數，則退回一步
//         return n -1;
//     if (n + 1 == tot || getJacobsthalNbr(js) >= tot)//// 若 nbr+1 等於 tot 或當前 jS 所對應的 Jacobsthal 數大於等於 tot，則返回 tot（代表末尾）
//         return tot;
//     // 否則，更新 jS（使用下一個 Jacobsthal 數）並返回 min( J(jS) - 1, tot - 1)
//     return std::min(getJacobsthalNbr(++js) -1, tot-1);
// }


// void PmergeMe::handle_odd_number(int argc, char ** argv, t_intVec& s)
// {
//     if ((argc -1)%2 != 0)//odd number
//     {
//         unsigned int last = std::stoi(argv[argc -1]);
//         std::cout << "last: " << last << std::endl;
//         //s.insert(std::upper_bound(s.begin(), s.end(), last), last);
//         for (unsigned int i = 0; i < s.size(); i++ )
//         {
//             if (last < s[i])
//             {
//                  std::cout << "last: " << last <<"i: "<< i<< "s[i]:" << s[i]<<std::endl;
//                 s.insert(s.begin() + i, last);
                
//                 break;
//             }
//             if (i == (s.size()-1))
//                 s.push_back(last);
//         }
//     }
   
// }

// bool PmergeMe::pair(int argc, char **argv)
// {
//     int range;
//     if (argc % 2 == 0)//確認數字是奇數個還是偶數個
//         range = argc -1;
//     else
//         range = argc;
//     for (int i = 1; i < range; i = i+2)
//     {
//         if (!isdigit(*argv[i]) || !isdigit(*argv[i+1]))
//         {
//             std::cerr << "Invalid input" << std::endl;
//             return false;
//         }
            
//         unsigned int n1 = std::stoi(argv[i]);
//         unsigned int n2 = std::stoi(argv[i + 1]); 
//         if (n1 > n2)
//             pairvec.push_back (std::make_pair(n1, n2));// a 大, b小
//         else
//             pairvec.push_back (std::make_pair(n2, n1));
//     }
//     return true;
// }

// void PmergeMe::sort_a(t_intVec& a, t_intVec& s)
// {
//     s.push_back(a[0]);
//     unsigned int i;
//     bool insert = false; // handle a[i] is smaller than s[0]
//     for ( i = 1; i < a.size(); i++)
//     {
//         for (unsigned int j = 0; j < s.size(); j++)
//         {
//             if ( a[i]< s[j])
//             {
//                 s.insert(s.begin() + j, a[i]);
//                 insert = true;
//                 break;
//             }
//         } 
//         if (!insert)
//             s.push_back(a[i]);
//         insert = false;
//     }


//     std::cout <<"\ns vector"<< std::endl;
//     for (unsigned int x : s) {
//         std::cout << x << " ";
//     }
//     std::cout << std::endl; 
// }

// void PmergeMe::add_min_b(t_intVec& s, t_intVec& b)
// {
//     for(unsigned int i = 0; i < s.size(); i++)
//     {
//     if(pairvec[i].first ==  s[0])
//         {
//         s.insert(s.begin(),pairvec[i].second);
//         b.erase(b.begin() + i);
//         break;
//         }
//     }
//     std::cout <<"\ns vector after added one b"<< std::endl;
//     for (unsigned int x : s) {
//         std::cout << x << " ";
//     }
//     std::cout << std::endl; 
//     std::cout <<"\nb vector"<< std::endl;
//     for (unsigned int x : b) {
//         std::cout << x << " ";
//     }
//     std::cout << std::endl; // 輸出: 1 3 5
// }

bool PmergeMe::vec_pmerge(int argc, char **argv)//3 5 9 7 4
{
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
       // std::cout << "b[" << i<< "]" << b[i] << std::endl;
       // guessIndex = PmergeMe::nextJacobsthalNbr(b[i], js, tot);
        PmergeMe::nextJacobsthalNbr(b[i], js, tot);
   
    //​再插入 b1）使用二分搜尋將每個 b 插入到主鏈中，確保每次插入操作的搜尋區間長度理想，以達到較少的比較次數。
    // 接著，利用 STL 的 upper_bound 找到 b[i] 在 s 中的正確插入位置
    //當然，也可以利用 guessIndex 作初步猜測後，再局部搜尋）
        int targetIndex = std::upper_bound(s.begin(), s.end(), b[i]) - s.begin();
        //std::cout << "最終決定插入位置 targetIndex = " << targetIndex << std::endl;
        s.insert(s.begin() + targetIndex, b[i]);
    }
   
//4.處理剩餘未配對元素：
//最後，利用二分搜尋將未配對的元素插入到正確位置。
    handle_odd_number(argc, argv, s);
   

    std::cout << "After : ";
    for (int num : s)
        std::cout << num << " ";
    std::cout << std::endl;
    return true;
}