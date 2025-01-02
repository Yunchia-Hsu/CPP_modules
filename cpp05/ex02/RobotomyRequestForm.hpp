/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:45:27 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/02 14:09:01 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

// : Required grades: sign 72, exec 45
// Makes some drilling noises. Then, 
// informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, 
// informs that the robotomy failed.
class AForm;

class RobotomyRequestForm : public AForm
{

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& from );
	~RobotomyRequestForm();
	RobotomyRequestForm& operator= (const RobotomyRequestForm& from);
	void executeAction() const;	

};

#endif