/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:58:12 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/25 15:52:53 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string line;
    
    std::cout << "please tell me what kind if command you want to pick!" << std::endl;
    std::cout << "Options are;\n (1)DEBUG\n (2)INFO\n (3)WARNING\n (4)ERROR\n";
    while (1)
    {  
        getline(std::cin, line);
        if (line.empty())
            std::cout << "You have nothing to complain? Really?!" << std::endl;
        else if (std::cin.eof()==true)
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << std::endl;
        }
        else
        {
            harl.complain(line);
            if (getLevel(line) != -1)
                break;
        }
        
    }
	return 0;
}