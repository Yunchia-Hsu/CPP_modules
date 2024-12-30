/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:36:19 by yhsu              #+#    #+#             */
/*   Updated: 2024/12/30 14:36:20 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 145, 137, "no target")
{
    std::cout << "Default ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137, target)
{
     std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& from): AForm(from)
{
    std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm deleted." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& from)
{
    if (this != &from)
        Form::operator=(from);
    return *this;
}

void ShrubberyCreationForm::executeAction(const Bureaucrat& b) const
{
        std::fstream outfile;
        outfile.open(this->getTarget()+"_shrubbery");
        if (!oufile.is_open())
        {
            std::cerr<<"Error: the file failed to open"<< std::endl:
            return ;
        }
        oufile <<     * << std::endl;
        oufile <<    *** << std::endl;
        oufile <<   ***** << std::endl;
        oufile <<  ******* << std::endl;
        oufile << ********* << std::endl;
        oufile <<    ||| << std::endl;
        oufile <<    ||| << std::endl;
        oufile <<    ||| << std::endl;

}
