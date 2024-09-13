/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:28:30 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/13 12:50:06 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
//default destructor
Phonebook::~Phonebook()
{
}
//default contructor
Phonebook::Phonebook()
{
    for (int i = 0 ; i < 8 ; i++)
    {
        this->contact[i].set_index(-1);
    }
}

void Phonebook::add_contact(void)
{
	static int i;
	int index = i % 8;
	this->contact[index].set_index(index);
	this->contact[index].add_new_contact(index);
	i++;
}
    
void Phonebook::search_contact(void) 
{
	int index = -1;
	int valid = 0;

	while(valid == 1)
	{
		std::cout << "Please enter the contact's index: " << std::flush;
		std::cin >> index;
		if (std::cin.eof())
		{
			std::cout << "EOF signal received. " << std::endl;
			exit (0);
		}
			
		if (std::cin.good() && ( index >= 0 && index < 8 ))
			valid = 1;
		else
		{
			std::cin.clear();
			//std::cin.ignore( std::numeric_limits<std::streamsize > :: max(), '\n');
			std::cout << "Index should be between 0 ~ 7, please try again. " << std::endl;
		}
	}	
	//std::cin.ignore( std::numeric_limits<std::streamsize > :: max(), '\n');
	std::cout<<std::endl;
	this->contact[index].view();
}

int Phonebook::display_contacts(void)
{
	int i = 0;
	while (i < 8)
	{
		if (this->contact[i].get_index() == -1)
		{
			if (i == 0)
			{
				std::cout << "No contact in the phonebook" << std::endl;
				return 0;
			}
			else 
			{
				i++;
				continue;
			}
		}
		this->contact[i].display();
		i++;
	}
	
	return (1);
}