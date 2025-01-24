/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:39 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/22 12:22:27 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

// void exception(std::string name, int grade)
// {
// 	try
// 	{
// 		Bureaucrat me(name, grade);
// 		std::cout <<me.getName() <<" is in grade " << me.getGrade() << std::endl;
		
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout<< "\n";
// }

int main () 
{
	std::cout<< "\n\033[31mForm TEST \033[0m\n";
	
	try
	{
		Bureaucrat a("Alice", 24);
		Bureaucrat m("Mario", 100);
		Form tax("tax form", 25, 30);
		Form report("Report card", 60, 80);
		
		std::cout<< "\n\033[31mGRADE Form info\033[0m\n";
		
		std::cout << report << std::endl;
		
		std::cout << tax << std::endl;
		std::cout<< "\n\033[31mGRADE Alice signs forms\033[0m\n";
		a.signForm(tax);
		std::cout << tax << std::endl;
		a.signForm(report);
		std::cout << report << std::endl;
		
		std::cout<< "\n\033[31mGRADE Mario signs forms\033[0m\n";
		m.signForm(tax);
		std::cout << tax << std::endl;
		m.signForm(report);
		std::cout << report << std::endl;

	}
	catch (std::exception& e)
	{
		std::cout << "EXCEPTION: "<< e.what() << std::endl;
	}

	std::cout<< "\n\033[31mBILL Form\033[0m\n";
	try
	{
		Form bill("bill", -4, 100);
	}
	catch (std::exception& e)
	{
		std::cout << "EXCEPTION: "<< e.what() << std::endl;
	}


  return 0;
}