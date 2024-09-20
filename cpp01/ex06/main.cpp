/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:58:30 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/20 10:58:31 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"

int main(int argc, char **argv)
{
    
    if (argc != 2)
    {
        std::cout <<"Please enter an argument." << std::endl;
        std::cout << "Options are;\n (1)DEBUG\n (2)INFO\n (3)WARNING\n (4)ERROR\n";
        return 1;
    }
    Harl harl;
    std::string line = argv[1];

    harl.complain(line);
    return 0;
    
}