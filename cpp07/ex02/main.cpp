/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:43 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/24 14:58:29 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"



int main ()
{
	std::cout << "\n---test Array content---\n";
	Array<int> intarr(10);
	int * comparearr = new int[10];
		
	srand(time(NULL));
	for (unsigned int i= 0; i < intarr.size(); i++)
	{
		int value = rand();
		intarr[i] = value;
		comparearr[i] = value;
	}

	
	for (unsigned int i= 0; i < intarr.size(); i++)
	{
		if (intarr[i] != comparearr[i])
			std::cout << "inarr is not the SAME as intarr" << std::endl;
		// else
		// {
			
		// 	std::cout <<"intarr[i]: "<< intarr[i] << std::endl;
		// 	std::cout <<"comaparearr[i]: "<< comparearr[i] << std::endl;
		// }	

	}
	delete[] comparearr;
	
	std::cout << "\n---test copy constructor---\n";
	Array<int> copy(intarr); 
	for (unsigned int i= 0; i < intarr.size(); i++)
	{
		if (intarr[i] != copy[i])
			std::cout << "inarr is not the SAME as intarr" << std::endl;
		else
		{
			
			std::cout <<"intarr[i]: "<< intarr[i]<< "  at the address "<< &intarr[i]<< "content: " << intarr[i]<< std::endl;
			std::cout <<"copy[i]: "<< copy[i] << " at the address "<< &copy[i] << " content: " << copy[i] << std::endl;
		}	

	}

	std::cout << "\n---test assignement operator = ---\n\n";
	Array<int> tmp(10); 

	tmp = intarr;
	
	for (unsigned int i= 0; i < intarr.size(); i++)
	{
		
		if (intarr[i] != tmp[i])
			std::cout << "inarr is not the SAME as intarr" << std::endl;
		else
		{
			
			std::cout <<"intarr[i]: " << intarr[i]<< "  at the address "<< &intarr[i]<< "content: " << intarr[i]<< std::endl;
			std::cout <<"tmp[i]: " << tmp[i] << " at the address "<< &tmp[i] << " content: " << tmp[i]  << std::endl;
		}	

	}

	
	std::cout << "\n---test exception = ---\n\n";
	try
	{
		intarr[-2];
	}
	catch(const std::exception& e)
	{
			std::cerr << e.what()<< '\n';
	}

	std::cout << "\n---test string Array ---\n\n";
	Array<std::string> stringarr(5);
	stringarr[0] = "Hello";
	stringarr[1] = " this";
	stringarr[2] = " beautiful";
	stringarr[3] = " World";
	stringarr[4] = " !!!";
	
	for (int i =0; i < 5; i ++)
	{
		std::cout << stringarr[i];
	}
	

	std::cout << "\n---test double Array ---\n\n";
	Array<double> doublearr(5);
	doublearr[0] = 1.11;
	doublearr[1] = 2.22;
	doublearr[2] = 3.33;
	doublearr[3] = 4.44;
	doublearr[4] = 9.999;
	
	for (int i =0; i < 5; i ++)
	{
		std::cout << doublearr[i] << '\n';
	}
	

	return 0;	
}
