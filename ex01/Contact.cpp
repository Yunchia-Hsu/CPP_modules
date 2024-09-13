/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:53:44 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/13 13:16:19 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact()
{	
}
Contact::Contact()
{
	this->index = -1;
}
//setter
void Contact::set_index(int index)
{
	this->index = index;
}
//getter
int Contact::get_index(void)
{
	return (this->index);
}

std::string Contact::get_firstname(void) const
{
	return (this->firstName);
}

std::string Contact::get_lastname(void) const
{
	return (this->lastName);;
}

std::string Contact::get_phonenumber(void) const
{
	return (this->phoneNumber);
}

std::string Contact::get_darksecret()
{
	return (this->darkSecret);
}
//fuctions

static std::string read_value(std::string value)
{
	std::string line;
	int success = 0;
	
	std::cout<< "Please enter a " << value << std::flush;
	getline(std::cin,line);
	while (success == 0)
	{
		if (std::cin.eof())
		{
			std::cout << "EOF signal received." << std::endl;
			exit (0);
		}
		if (std::cin.good() && !line.empty())
			success = 1;
		else if (line.empty())
		{
			std::cin.clear();
			std::cout << "Your input is empty. Please try again." << std::endl;
		}	

	}
	
		
	return (line);
}

void Contact::add_new_contact(int index)
{
	std::cout << "You are ready to add a new contact to index "<< index <<std::endl;
	std::cout << "Please fill in the following information: \n" << std::flush;
	this->firstName = read_value("first name: ");
	this->lastName = read_value("last name: ");
	this->phoneNumber = read_value("phone name: ");
	this->nickName = read_value("nick name: ");
	this->darkSecret = read_value("the darkest secret: ");
	std::cout << "The new contact added successfully." << std::endl;
}

void Contact::view(void)
{
	std::cout<< "view---------\n";
	if (this->index == -1)
	{
		std::cout << "no contact under the index!" << std::endl;
		return;
	}
	std::cout << "CONTACT No."<< this->index << std::endl;
	std::cout << "First name: "<< this->firstName << std::endl;
	std::cout << "Last name: "<< this->lastName <<  std::endl;
	std::cout << "Phone number: "<< this->phoneNumber  << std::endl;
	std::cout << "Nick name: "<< this->nickName  << std::endl;
	std::cout << "The darkest secret: "<< this->darkSecret << std::endl;
	
}
 void Contact::display (void) const
 {
	std::cout<< "dispay---------\n" ;
	std::cout<< "|" <<std::setw(10)<< this->index << std::flush;
	std::cout << "|" << std::setw(10)  << std::flush;
 }

