/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:26:10 by yhsu              #+#    #+#             */
/*   Updated: 2025/02/07 17:19:03 by yhsu             ###   ########.fr       */
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
        if (!isdigit(*argv[i]) || std::stoi(argv[i]) < 0)
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




//std::chrono 或其他計時機制