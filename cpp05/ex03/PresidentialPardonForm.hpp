/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:56:54 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/20 14:21:30 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"


class AForm;

class PresidentialPardonForm : public AForm
{
public:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& from);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator= (const PresidentialPardonForm& from);		

	void executeAction() const;
};




//簽署所需等級：25，執行所需等級：5。
//執行時會告知 <target> 已被 Zaphod Beeblebrox 特赦。




#endif