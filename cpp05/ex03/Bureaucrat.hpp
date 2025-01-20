/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:36 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/20 13:20:11 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP 

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _Name;
		int _Grade;//grade 1 is the highest one and 150 the lowest

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& from);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;

		void signForm(AForm& form);

		void incrementGrade(int grade);//提升官員等級（數字減小）。
		void decrementGrade(int grade);//降低官員等級（數字增大）

		void executeForm(AForm const & form);
		//<bureaucrat> executed <form>

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();//why virtula const char*
		};

		class GradeTooLowException : public std::exception
		{
			const  char* what() const throw();
		};



};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);



#endif