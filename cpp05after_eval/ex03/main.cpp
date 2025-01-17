/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:39 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/17 19:35:10 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



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
	
	std::cout<< "\n\033[31m   INTERN TEST \033[0m\n";
	Intern someRandomIntern;
	AForm* rrf;	            
	rrf = someRandomIntern.makeForm("ajkdajkbabrobotomy request", "Bender");

	Intern bestIntern;
	AForm* best;	            
	best = bestIntern.makeForm("shrubbery creation", "Bender");

	Intern okIntern;
	AForm* okay;	            
	okay = okIntern.makeForm("presidential pardon", "Bender");

	Intern stupidIntern;
	AForm* random;	            
	random = stupidIntern.makeForm("bilibala form", "hehehaha");

	delete rrf;
	delete random;
	delete best;
	delete okay;
	
  return 0;
}