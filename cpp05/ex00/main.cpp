/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:39 by yhsu              #+#    #+#             */
/*   Updated: 2024/11/28 15:51:38 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

void exception(std::string name, int grade)
{
	try
	{
		Bureaucrat me(name, grade);
		//std::cout <<" \033[32mtest << \033[0m " << me.getGrade() << std::endl;
		std::cout << me << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main () 
{
	std::cout<< "\033[31mEXCEPTION TEST\033[0m\n";
	exception("Shuji", 42);
	exception("Shuji", -42);
	exception("Shuji", 420);

	std::cout<< "\n\033[31mGRADE TEST 1\033[0m\n";
	Bureaucrat mycompany("Grace", 40);
	std::cout << mycompany << std::endl;
	//std::cout <<mycompany.getName() <<" is in grade " << mycompany.getGrade() << std::endl;
	try
	{
		std::cout <<"\033[32mAfter increment 20\033[0m " << std::endl; 
		//std::cout<<" " <<mycompany.getName() <<" is in grade "<< mycompany.getGrade() << std::endl;
		mycompany.incrementGrade(20);
		std::cout << mycompany << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout<< "\n\033[31mGRADE TEST 2\033[0m\n";
	//std::cout <<mycompany.getName() <<" is in grade " << mycompany.getGrade() << std::endl;
	std::cout << mycompany << std::endl;
	try
	{
		std::cout <<"\033[32mAfter increment 20\033[0m " << std::endl; 
		//std::cout<<"After increment " <<mycompany.getName() <<" is in grade "<< mycompany.getGrade() << std::endl;
		
		mycompany.incrementGrade(20);
		std::cout << mycompany << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout<< "\n\033[31mGRADE TEST 3\033[0m\n";
	Bureaucrat urcompany("Kelly", 100);
	std::cout << urcompany << std::endl;
	//std::cout <<urcompany.getName() <<" is in grade " << urcompany.getGrade() << std::endl;
	try
	{
		std::cout <<"\033[32mAfter decrement 50\033[0m " << std::endl;
		//std::cout<<"After decrement " <<urcompany.getName() <<" is in grade "<< urcompany.getGrade() << std::endl;
		urcompany.decrementGrade(50);
		std::cout << urcompany << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout<< "\n\033[31mGRADE TEST 4\033[0m\n";
	std::cout << urcompany << std::endl;
	try
	{
		std::cout <<"\033[32mAfter decrement -4\033[0m " << std::endl;
		//std::cout<<"After decrement " <<urcompany.getName() <<" is in grade "<< urcompany.getGrade() << std::endl;
		urcompany.decrementGrade(-4);
		std::cout << urcompany << std::endl;
	}
	catch(...)
	{
		std::cout << "exception" << std::endl;
	}

 	std::cout<< "\n\033[31mGRADE TEST 5\033[0m\n";
	try
	{
		std::cout <<"\033[32mAfter decrement 'm'\033[0m " << std::endl;
		//std::cout<<"After decrement " << urcompany.getName() <<" is in grade "<< urcompany.getGrade() << std::endl;
		urcompany.decrementGrade('m');
		std::cout << urcompany << std::endl;
	}
	catch(...)
	{
		std::cout << "exception" << std::endl;
	}
	

  
	
  return 0;
}