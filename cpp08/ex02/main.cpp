/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:46:01 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/12 16:00:24 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include <vector>
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

    std::cout << "\033[32masses the last element: \033[0m"<<mintstack.top() << std::endl;
    MutantStack<int> copy(mintstack);
    MutantStack<int>::iterator copyit = copy.begin();
    MutantStack<int>::iterator copyite = copy.end();
    std::cout << "copy stack 1: " << std::endl;
    for (; copyit != copyite; ++copyit)
    {
        std::cout<< *copyit << std::endl;  
    }
    copy.pop();// remove top element (last added element)
    
    std::cout << "\033[32mcopy stack 2: after pop \033[0m" << std::endl;
    copyit = copy.begin();
    copyite = copy.end();

    for (; copyit != copyite; ++copyit)
    {
        std::cout<< *copyit << std::endl;  
    }  
    return 0;
}


// //PDF
// int main()
// {
// 	MutantStack<int> mstack;
	
// 	mstack.push(4);
// 	mstack.push(17);
// 	std::cout << "mstack top "<<mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout <<"mstack size "<< mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }