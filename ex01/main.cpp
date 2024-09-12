#include <iostream>
#include "PhoneBook.hpp"

void    input_read_fail()
{
    if (std::cin.eof())
        std::cout << "EOF signal received. " << std::endl;
    else
        std::cout << "Error reading input." << std::endl;
    exit (0);
}

int main(int argc, char **argv)
{
    //int len;
    std::string command;
    Phonebook pb;
    
    if (argc <= 1)
        std::cout << "invalid number of arguments" << std::endl;
    else	
		command = argv[1];
    
    while (1)
    {
        std::cout << "\nPHONEBOOK:" << std::endl;
        if (command.empty())
		{
			std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
        if (!std::getline(std::cin, command))
            input_read_fail();
		}
		
        if (command == "ADD")
            pb.add_contact();
        else if (command == "SEARCH")
		{
			if (pb.display_contacts())
				pb.search_contact();
		}	
        else if (command == "EXIT")
            break;
        else    
            std::cout << command <<" is an invalid command, please try again " << std::endl; 
		command = "";
		std::cout << "Thanks for using the PhoneBook" << std::endl;
	}
	
    return 0;
}
