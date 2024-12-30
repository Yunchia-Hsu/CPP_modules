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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void exception(std::string name, int grade)
{
	try
	{
		Bureaucrat me(name, grade);
		std::cout <<me.getName() <<" is in grade " << me.getGrade() << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout<< "\n";
}

int main () 
{
	std::cout<< "\n\033[31mForm TEST \033[0m\n";
	//create form
	//seign form 
	//check if form is signed and execute
	ShrubberyCreationForm shrubs("yunchia shrubs");
	Bureaucrat yunchia("Yunchia", 10);
	yunchia.signForm(shrubs);
	yunchia.executeForm(shrubs);

  return 0;
}