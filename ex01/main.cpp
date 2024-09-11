#include <iostream>
#include "PhoneBook.hpp"

void    input_read_fail()
{
    if (std::cin.eof())
        std::cout << "EOF signal received. " << std::endl;
    else
        std::cout << "Error reading input." << std::endl;
    exit (1);
}

int main(int argc, char **argv)
{
    int len;
    std::string command;
    Phonebook pb;
    
    if (argc != 1)
        std::cout << "invalid number of arguments" << std::endl;
    //
    
    //std::cout << "Thanks for using the PhoneBook" << std::endl;
    while (1)
    {
        std::cout << "\nPHONEBOOK:" << std::endl;
        std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
        if (!std::getline(std::cin, command))
            input_read_fail();
        if (command == "ADD")
            pb.add_contact();
            //std::cout<< "ADD\n";
        else if (command == "SEARCH\n")
            pb.search_contact();
            //std::cout<< "SEARCH";
        else if (command == "EXIT")
            break;
        else    
            std::cout << command <<" is an invalid command, please try again " << std::endl; 
    }
    return 0;
}