/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:45:13 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/02 14:23:02 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include <fstream> 
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   _fName;
    bool                isSigned;
    const int           gradeToSign;
    const int           gradeToExecute;
    const std::string   _target;

public:

    AForm();
    AForm(std::string name, int gradeToSign, int gradeToExecute, std::string target);
    AForm(const AForm& from);
    AForm& operator=(const AForm& from); 
    virtual ~AForm();
    void beSigned(const Bureaucrat& b);

    //getter
    virtual std::string getName() const;
    bool getIsSigned();
    int getGradeToSigned() const;
    int getGradeToExecute() const;
    std::string getTarget() const;

    void execute(Bureaucrat const & executor) const;
    //check if the form is signed 
    //check grade to execute is great engouth execute the form or throw exception 
    virtual void executeAction() const = 0;

    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    
    class FormNotSigned : public std::exception
    {
        const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif