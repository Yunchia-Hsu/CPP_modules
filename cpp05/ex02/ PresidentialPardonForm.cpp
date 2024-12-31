/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    PresidentialPardonForm.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:23:11 by yhsu              #+#    #+#             */
/*   Updated: 2024/12/31 18:44:46 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PredidentailPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout<< "Default PresidentialPardonForm constructor created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm::("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& from)
{
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	 std::cout << "PresidentialPardonForm deleted." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& from)
{
	if (this != &from)
		PresidentialPardonForm::operator=(from);
	return *this;
}

void PresidentialPardonForm::executeAction(const Bureaucrat& b) const
{
	std::cout << b << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
