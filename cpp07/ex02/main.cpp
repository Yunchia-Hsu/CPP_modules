/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:43 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/17 16:04:17 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"


// #define MAX_VAL 750


// void testForCreateArray() {

// 	std::cout << "---testForCreateArray()---\n";
// 	std::cout << "-Double Array\n";
// 	Array<double> doubleArray(4);
// 	doubleArray[0] = 1.12;
// 	doubleArray[1] = 2.23;
// 	doubleArray[2] = 3.34;
// 	doubleArray[3] = 4.45;

// 	for (unsigned int i = 0; i < 4; i++) {
// 		std::cout << doubleArray[i] << std::endl;
// 	}

// 	std::cout << std::endl;

// 	std::cout << "-String Array\n";
// 	Array<std::string> stringArray(3);
// 	stringArray[0] = "Hello";
// 	stringArray[1] = "Can you";
// 	stringArray[2] = "hear me?";

// 	for (unsigned int i = 0; i < 4; i++) {
// 		std::cout << stringArray[i] << std::endl;
// 	}

// }

// int main(int, char**)
// {

// 	std::cout << "---test from subject---\n";
//     Array<int> numbers(MAX_VAL); // create an Array<int> with 750 elements

//     int* mirror = new int[MAX_VAL]; // create an int array with 750 elements

//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand(); // generate a random int
//         numbers[i] = value; // store the randm value in the array
//         mirror[i] = value; // store the randm value in the array, numbers and mirror are the same
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers; // testing = operator
//         Array<int> test(tmp); // testing copy constructor
//     }

// 	// check if the mirror and numbers have the same value
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

// 	// test operator[] is working
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;

// 	testForCreateArray();
	
//     return 0;
// }

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
	std::cout << "\n---test copy constructor---\n";
	Array<int> copy(intarr); 
	for (unsigned int i= 0; i < intarr.size(); i++)
	{
		if (intarr[i] != copy[i])
			std::cout << "inarr is not the SAME as intarr" << std::endl;
		else
		{
			
			std::cout <<"intarr[i]: "<< intarr[i]<< "  at the address "<< &intarr[i]<< std::endl;
			std::cout <<"copy[i]: "<< copy[i] << " at the address "<< &copy[i] << std::endl;
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
			
			std::cout <<"intarr[i]: " << intarr[i]<< "  at the address "<< &intarr[i]<< std::endl;
			std::cout <<"tmp[i]: " << tmp[i] << " at the address "<< &tmp[i] << std::endl;
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



	return 0;	
}
