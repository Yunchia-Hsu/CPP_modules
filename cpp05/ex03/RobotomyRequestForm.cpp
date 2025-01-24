/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:45:20 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/22 12:38:01 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

	RobotomyRequestForm::RobotomyRequestForm():AForm()
	{
		std::cout << "default Robotomy created" << std::endl;
	}
	
	RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45, target)
	{
		std::cout << "RobotomyRequestForm created" << std::endl;		
	}
	
	RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& from): AForm(from),target(from.target)
	{
		std::cout << "RobotomyRequestForm copy constructor called" << std::endl;	
	}
	
	RobotomyRequestForm::~RobotomyRequestForm()
	{
		//std::cout << "RobotomyRequestForm deleted" << std::endl;
	}
	
	RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& from)
	{
		if (this != &from)
			this->target = from.target;
		return *this;
	}
	
	

	void RobotomyRequestForm::executeAction() const
	{
		std::cout << " Bzzzzzzzzz " << std::endl;
		std::srand(std::time(0));
		int n = std::rand();
		if ( n % 2 == 0)
			std::cout << this->getTarget() << "has been robotomized1"<<std::endl;
		else 
			std::cout << this->getTarget() << " robotomy failed\n" << std::endl;
	}

// : Required grades: sign 72, exec 45
// Makes some drilling noises. Then, 
// informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, 
// informs that the robotomy failed.
