/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:56:27 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/17 19:32:43 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default intern constructor" << std::endl;
};

Intern::~Intern()
{
	std::cout << "intern deleted" << std::endl;
};
Intern::Intern(const Intern& from)
{
	(void) from;
	std::cout << "Inter copy constructor called." << std::endl;	
}
Intern& Intern::operator=(const Intern& from)
{
	(void)from; //supress the warning of unused parameter
	std::cout << "Inter copy assignment called." << std::endl;
	return *this;
}


AForm* Intern::makeForm(const std::string formname, const std::string  target)
{
	AForm* newForm = nullptr;
	
	std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = -1;
	while (i < 3)
	{
		i++;
		if (i == 3)
			break;
		if (form[i] == formname)
			break;
	}
		
	switch (i) 
	{
		case 0:
			newForm = new ShrubberyCreationForm(target); 
			break;
		case 1:
			newForm = new RobotomyRequestForm(target);
			break;
		case 2:
			newForm = new PresidentialPardonForm(target);
			break;
			
		default:
			
			std::cout << "We don't have this form. Stop bothering me!!!!" <<  std::endl; 
			return newForm;
	}	
	if (newForm != nullptr)
		std::cout << "Intern creates " << formname<< std::endl;
	return newForm;
}