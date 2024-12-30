#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
    
public:    
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& from);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& from);

    void executeAction(const Bureaucrat& b) const;

};

//: Required grades: sign 145, exec 137
//Create a file <target>_shrubbery in the 
//working directory, and writes ASCII trees
//inside it.

#endif