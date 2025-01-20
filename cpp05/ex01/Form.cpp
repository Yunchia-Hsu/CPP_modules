#include "Form.hpp"

Form::Form() : _fName(""), gradeToSign(150), gradeToExecute(150)
{    
    this->isSigned = false;
}

Form::Form(std::string name, int Sign, int Execute): _fName(name), isSigned(false), gradeToSign(Sign), gradeToExecute(Execute)
{
    if (Sign < 1 || Execute < 1)
    {
        throw std::invalid_argument("Grade to0o high");
    }
    if (Sign > 150 || Execute > 150)
    {
        throw std::invalid_argument("Grade too low");
    }

    //std::cout << this->_fName << " needs to be in grade " << this->gradeToSign << " to sign the form \n << and needs to be in grade "<< this->gradeToExecute << "to execute." << std::endl;
}

Form::Form(const Form& from) : Form (from._fName, from.gradeToSign,from.gradeToExecute)
{
    *this = from;
}

/* Operator overloading */
Form& Form::operator=(const Form& from)
{
    if (this != &from)
	{
		// Placement new operator
		this->~Form();
		new(this) Form(from);//alocate memory at the same memory space
	}
	
    return *this;


	// if (this != &from)
	// {
	// 	// Placement new operator
	// 	this->~PresidentialPardonForm();
	// 	new(this) PresidentialPardonForm(from);
	// }
	// return *this;
}

Form::~Form()
{}

void Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= gradeToSign)
        this->isSigned = true;
    else
        throw Form::GradeTooLowException();
}


//getter
std::string Form::getName() const
{
    return this->_fName;
};

bool Form::getIsSigned()
{
    return this->isSigned;
};

int Form::getGradeToSigned() const
{
    return gradeToSign;
};

int Form::getGradeToExecute() const
{
    return gradeToExecute;
};

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << "Form: " << form.getName()
    << ", Grade to sign: " << form.getGradeToSigned()
    << ", Grade to Execute: " << form.getGradeToExecute() <<  std::endl;
    return out;
};


const char *Form::GradeTooLowException::what() const throw()
{
    return " the grade is too low to sign the form.";
};

