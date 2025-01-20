/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:36:19 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/20 18:03:19 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm()
{
    std::cout << "Default ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137, target)
{
    std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& from):AForm(from), target(from.target)
{
    std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm deleted." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& from)
{
    // if (this != &from)
    //     this->target = from.target;
    // return *this;

	if (this != &from)
	{
		// Placement new operator
		this->~ShrubberyCreationForm();
		new(this) ShrubberyCreationForm(from);
	}
	return *this;
}

void ShrubberyCreationForm::executeAction() const
{
        std::ofstream outfile;
        outfile.open(this->getTarget()+"_shrubbery");
        if (!outfile.is_open())
        {
            std::cerr<<"Error: the file failed to open"<< std::endl;
            return ;
        }
        outfile <<"    * "<< std::endl;
        outfile <<"   *** "<< std::endl;
        outfile <<"  ***** "<< std::endl;
        outfile <<" ******* "<< std::endl;
        outfile <<"********* "<< std::endl;
        outfile <<"   ||| "<< std::endl;
        outfile <<"   ||| "<< std::endl;


}
