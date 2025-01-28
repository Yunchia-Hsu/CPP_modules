/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:45:23 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/24 16:45:24 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"

int main ()
{
    std::vector <int> test = {1,2,3,4,5,6,7,8,9,0};

    try 
    {
       auto it =  easyfind(test, 7);//   auto  will automatically decide it's type
         std::cout << "value found in it: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    try 
    {
       auto itt =  easyfind(test, 2147483647);
         std::cout << "value found in it: " << *itt << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}