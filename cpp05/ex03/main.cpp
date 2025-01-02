/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:39 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/02 15:38:24 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



int main () 
{
	std::cout<< "\n\033[31m   FORM TEST \033[0m\n";
	try 
	{
		std::cout<< "\n\033[31m Shruberry Test \033[0m\n";
		ShrubberyCreationForm shrubs("yunchia shrubs");
		Bureaucrat yunchia("Yunchia", 140);
		yunchia.signForm(shrubs);
		yunchia.executeForm(shrubs);
	
		Intern someRandomIntern;
		Form* rrf;	            
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		// std::cout<< "\n\033[31m Presidential Test \033[0m\n";
		// PresidentialPardonForm president("Lumi president ");
		// Bureaucrat Lumi("Lumi", 150);
		// Lumi.signForm(president);
		// Lumi.executeForm(president);


		// std::cout<< "\n\033[31m Robot Test \033[0m\n";
		// RobotomyRequestForm robot("Yenyen robot");
		// Bureaucrat yen("Yen", 70);
		// yen.signForm(robot);
		// yen.executeForm(robot);
	}
	catch (std::exception& e)
	{
		std::cerr << "Error: " <<e.what() << std::endl;
	}

  return 0;
}