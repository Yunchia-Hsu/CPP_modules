
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
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
    vistual std::string getName() const;
    bool getIsSigned();
    int getGradeToSigned() const;
    int getGradeToExecute() const;
    std::string getTarget() const;

    void execute(Bureaucrat const & executor) const;
    //check if the form is signed 
    //check grade to execute is great engouth execute the form or throw exception 
   void executeAction() const = 0;

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

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif