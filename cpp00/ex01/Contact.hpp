/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:53:33 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/13 15:10:37 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits> 

class Contact
{
	private:
		int index;
		std::string firstName;
		std::string lastName;
		std::string phoneNumber;
		std::string nickName;
		std::string darkSecret;
	 public:
        Contact();
        ~Contact();
        
		void set_index(int index);
		int get_index(void);
        std::string get_firstname(void) const;
        std::string get_lastname(void) const;
        std::string get_phonenumber(void) const;
        std::string get_darksecret();
       
	    void add_new_contact(int index);
        void display (void) const;
        void view(void);
		
};

#endif