/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:33 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/20 13:22:15 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_Name("")
{
    this->_Grade = 150;
    //std::cout << "decault constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name)
{
    //std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):Bureaucrat(other._Name, other._Grade)
{
    //std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& from)// copy sth
{
    //std::cout << "Bureacrat copy assignmentoperator called" << std::endl;
    if (this == &from)
        return *this;
    
    this->_Grade = from._Grade;
    return *this;
}

Bureaucrat :: ~ Bureaucrat()
{
   // std::cout << "destructor called"<< std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->_Name;
}

int Bureaucrat::getGrade() const
{
    return this->_Grade;
}

void Bureaucrat::incrementGrade(int grade)
{   
    if (grade < 0)
        throw Bureaucrat::GradeTooHighException();
    if ((this->_Grade - grade) < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_Grade -= grade;
    //std::cout << this->_Name << "'s grade is " << this->_Grade << std::endl;
   
}

void Bureaucrat::decrementGrade(int grade)
{
    if (grade < 0)
        throw Bureaucrat::GradeTooHighException();
    if ((this->_Grade + grade) > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_Grade += grade;
    //std::cout << this->_Name << "'s grade is " << this->_Grade << std::endl;
}


const char *Bureaucrat::GradeTooHighException::what() const throw()//why virtula const char*
{
    return "ERROR: Grade can't be higher than 1";
};


const  char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "ERROR: Grade cannot be lower than 150";
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_Name <<" executed the form: " << form.getName() << " executed."<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_Name << " counldn't execute the form: "<<form.getName() << "\n   because " <<e.what() << '\n';
	}
	
}

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_Name <<  " signed " << form.getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << this->_Name << " couldn't sign " << form.getName() 
            << " because " << e.what() << std::endl;
    }
}