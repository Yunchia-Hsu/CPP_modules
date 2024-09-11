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
    void search_contact(void) const;
    int show_contact(void) const;
};

#endif