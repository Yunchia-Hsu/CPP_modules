


#include<iostream>

#include "MutantStack.hpp"

int main ()
{
    MutantStack<int> mintstack;

    std::cout << "\033[32mTest push \033[0m\n";
    mintstack.push(5);
    mintstack.push(17);
    mintstack.push(100);
    mintstack.push(6);
    mintstack.push(-65);

    MutantStack<int>::iterator it = mintstack.begin();
    MutantStack<int>::iterator ite = mintstack.end();

    for (; it != ite; ++it)
    {
        std::cout<< *it << std::endl;  
    }    
    std::cout << "\033[32mTest top \033[0m\n";

  mintstack.top();
    //mintstack.top(17);
    std::cout << "asses the last element: "<<mintstack.top() << std::endl;

    std::cout << "\033[32mTest pop \033[0m\n";


    MutantStack<int> copy(mintstack);
    std::cout << "copy size before: "<<copy.size() << std::endl;
    MutantStack<int>::iterator copyit = copy.begin();
    MutantStack<int>::iterator copyite = copy.end();
    std::cout << "copy stack 1: " << std::endl;
    for (; copyit != copyite; ++copyit)
    {
        std::cout<< *copyit << std::endl;  
    }
    copy.pop();// remove top element (last added element)
    std::cout << "copy size after: "<<copy.size() << std::endl;
    std::cout << "copy stack 2: " << std::endl;
    copyit = copy.begin();
    copyite = copy.end();


    for (; copyit != copyite; ++copyit)
    {
        std::cout<< *copyit << std::endl;  
    }  


    return 0;
  
}