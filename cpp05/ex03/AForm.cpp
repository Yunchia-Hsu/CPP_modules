/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 17:52:28 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/02 15:23:33 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _fName(""), gradeToSign(150), gradeToExecute(150), _target("")
{    
    this->isSigned = false;
};

AForm::AForm(std::string name, int Sign, int Execute, std::string target): _fName(name), isSigned(false), gradeToSign(Sign), gradeToExecute(Execute), _target(target)
{
    if (Sign < 1 || Execute < 1)
    {
        throw std::invalid_argument("Grade too high");
    }
    if (Sign > 150 || Execute > 150)
    {
        throw std::invalid_argument("Grade too low");
    }

    //std::cout << this->_fName << " needs to be in grade " << this->gradeToSign << " to sign the form \n << and needs to be in grade "<< this->gradeToExecute << "to execute." << std::endl;
};

AForm::AForm(const AForm& from) : AForm (from._fName, from.gradeToSign,from.gradeToExecute, from._target)
{
    *this = from;
};

AForm& AForm::operator=(const AForm& from)
{
    (void)from;
    return *this;
}

AForm::~AForm()
{}

void AForm::beSigned(const Bureaucrat& b )
{
    if (b.getGrade() <= gradeToSign)
        this->isSigned = true;
    else
        throw AForm::GradeTooLowException();
}


//getter
std::string AForm::getName() const
{
    return this->_fName;
};

bool AForm::getIsSigned()
{
    return this->isSigned;
};

int AForm::getGradeToSigned() const
{
    return gradeToSign;
};

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
};

std::string AForm::getTarget() const
{
    return _target;
};

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
    out << "Form: " << form.getName()
    << ", Grade to sign: " << form.getGradeToSigned()
    << ", Grade to Execute: " << form.getGradeToExecute() <<  std::endl;
    return out;
};

const char *AForm::GradeTooHighException::what() const throw()
{
    return " the grade is too high.";
};

const char *AForm::GradeTooLowException::what() const throw()
{
    return " the grade is too low.";
};

const char *AForm::FormNotSigned::what() const throw()
{
    return " the grade is too low to sign the form.";
};

void AForm::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == false)
        throw AForm::FormNotSigned();
    else if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
        this->executeAction();
};