




#include <iostream>
#include <vector>
#include <list>
#include <chrono>


int main (int argc , char *argv[]) 
{

    if (argc < 2)
    {
        std::cout << "invalig input, put   ./PmergeMe <numbers to sort>" << std::endl;
    }
    pmerge(argc, argv);
    return 0;


}




//    ./PmergeMe 3 5 9 7 4
/*

std::vector + std::list


for i : 1 to length(A) -1
 j = i
while j > 0 and A[j-1] > A[j]
    swap A[j] and A[j-1]
    j = j - 1
*/



//std::chrono 或其他計時機制