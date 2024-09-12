/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:28:40 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/12 17:03:20 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class Phonebook 
{
    private:
        Contact contact[8];
    public:
    Phonebook();
    ~Phonebook();
    
    void add_contact(void);
    void search_contact(void);
    int display_contacts(void);
};

#endif