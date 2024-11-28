/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:36 by yhsu              #+#    #+#             */
/*   Updated: 2024/11/28 16:06:14 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP 

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		std::string _Name;
		std::string _Grade;//grade 1 is the highest one and 150 the lowest

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
		std::string getName();
		std::string getGrade();
};



{
/* do some stuff with bureaucrats */
}
catch (std::exception & e)
{
/* handle exception */
}



#endif