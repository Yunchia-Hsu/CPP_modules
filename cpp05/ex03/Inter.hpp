
#ifndef INTERN_HPP
# define INTERN_HPP 

#include <iostream>
#include <exception>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
private

public:
    Intern();
    ~Inter();
    Inter(const Intern& from);
    Inter& Inter operator=(const Inter& from);
    *AForm makeForm(const std::string formname, std::string  target); 
};


#endif