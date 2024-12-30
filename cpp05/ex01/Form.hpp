
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _fName;
    bool isSigned;//init false
    const int gradeToSign;//官員需要達到的最低等級才能簽署表單 not sure private or public
    const int gradeToExecute;//官員需要達到的最低等級才能執行表單

public:

    Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(const Form& from);
    Form& operator=(const Form& from); 
    ~Form();
    void beSigned(const Bureaucrat& b);

    //getter
    std::string getName() const;
    bool getIsSigned();
    int getGradeToSigned() const;
    int getGradeToExecute() const;

    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif