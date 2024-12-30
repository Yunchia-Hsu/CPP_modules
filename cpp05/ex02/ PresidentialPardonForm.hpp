/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    PresidentialPardonForm.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:56:54 by yhsu              #+#    #+#             */
/*   Updated: 2024/12/30 16:10:34 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& from);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator= ();		
};




//簽署所需等級：25，執行所需等級：5。
//執行時會告知 <target> 已被 Zaphod Beeblebrox 特赦。




#endif