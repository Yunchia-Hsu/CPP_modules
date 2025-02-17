/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:36:28 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/20 14:05:41 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
public:
	std::string target;
public:    
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& from);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& from);

    void executeAction() const;

};

//: Required grades: sign 145, exec 137
//Create a file <target>_shrubbery in the 
//working directory, and writes ASCII trees
//inside it.

#endif