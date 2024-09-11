
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
    
  }
    void search_contact(void) const;
    int show_contact(void) const;