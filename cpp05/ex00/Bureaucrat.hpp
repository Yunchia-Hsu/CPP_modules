/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:20:36 by yhsu              #+#    #+#             */
/*   Updated: 2024/11/28 16:02:05 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP 

#include <iostream>
#include <exception>

class Bureacrat
{
	private:
		std::string _Name;
		std::string _Grade;//grade 1 is the highest one and 150 the lowest

	public:
		Bureacrat();
		Bureacrat(const Bureacrat& other);
		~Bureacrat();
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