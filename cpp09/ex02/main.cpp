/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:26:10 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/13 18:55:50 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include "PmergeMe.hpp"

bool input_check(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "invalig input: ./PmergeMe <numbers to sort>" << std::endl;
        return false;;
    }
	
    for (int i = 1 ; i < argc ; i++ )
    {
		
		std::string str = argv[i];
		size_t pos = str.find_first_not_of('0');
		std::string trimmed = (pos == std::string::npos) ? "0" : str.substr(pos);
		if (trimmed.size() > 10) 
		{
			std::cerr << "Invalid input" << std::endl;
			return false;
		}
		if (trimmed.size() == 10 && trimmed > "2147483647") 
		{
			std::cerr << "Invalid input" << std::endl;
			return false;
		}
			
		if (!isdigit(*argv[i]) || std::stoi(argv[i]) <= 0)
		{
			std::cerr << "Invalid input" << std::endl;
			return false;
		}
		
    }
    return true;
}

int main (int argc , char *argv[]) 
{
    if (!input_check(argc, argv))
        return 1;
    
    std::cout << "\033[0;32mBefore: \033[0m";
    for (int i = 1 ; i < argc ; i++ )
        std::cout << argv[i] << " ";
    std::cout << std::endl; 

    PmergeMe::vec_pmerge(argc, argv);
    PmergeMe::lst_pmerge(argc, argv);

    return 0;
}




//./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '`                 for mac 

//./PmergeMe $(shuf -i 1-100000 -n 3000 | tr '\n' ' ')            for linux
 