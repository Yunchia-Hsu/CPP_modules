#include <iostream>
#include <stack>
#include <cstring>
#include "RPN.hpp"


bool check_operator( char **argv)
{
	int i;
	std::string arg = argv[1];
    int len = arg.length();
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] == '+' || argv[1][i] == '-' || argv[1][i] == '*' || argv[1][i] == '/')
			return true;
	}
	return false;

}

int main (int argc , char **argv)
{
// std::stack
    (void)argc; 
    if (argc != 2)
    {
        std::cout << "invalid input ./RPN [string]" << std::endl;
        return 1;
    }
	else 
	{
		std::string arg;
		arg = argv[1];
    	int len = arg.length();
		if(len > 2 && !check_operator( argv))
		{
			std::cout << "invalid input ./RPN [1 2 +]" << std::endl;
			return 1;
		}
		
        char * arr = new char[(len + 1)];
        int k = 0, j = 0;
        while(k < len)
        {
            if (argv[1][k] != 32 && argv[1][k] != '\0')//32 space
            {
                arr[j] = argv[1][k];
                j++; 
            }
            k++;
        }
		arr[j] = '\0';
		
        //validation check
        for (int l = 0; l < (len + 1) / 2 ; l++)
        {
            if (arr[l] != '+' && arr[l] != '-' && arr[l] != '*' && arr[l] != '/' && !isdigit(arr[l]))
            {
                std::cerr <<  "Error" << std::endl;
				delete [] arr;
                return 1;
            } 
           
        }
    	RPN::calculation(arr);
        delete [] arr;
    }
    return 0;
}
