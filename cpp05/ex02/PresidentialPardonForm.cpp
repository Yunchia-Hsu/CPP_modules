/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:23:11 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/20 17:56:58 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm()
{
	std::cout<< "Default PresidentialPardonForm constructor created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& from):AForm(from),target(from.target)
{
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "PresidentialPardonForm deleted." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& from)
{
	// if (this != &from)
	// 	this->target = from.target;
	// return *this;

	if (this != &from)
	{
		// Placement new operator
		this->~PresidentialPardonForm();
		new(this) PresidentialPardonForm(from);
	}
	return *this;
}

void PresidentialPardonForm::executeAction() const
{
	std::cout << this->getTarget() << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
