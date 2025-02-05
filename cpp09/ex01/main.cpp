#include <iostream>
#include <stack>
#include "RPN.hpp"


int main (int argc , char **argv)
{
//堆疊 std::stack
    (void)argc; 
    if (argc != 2)
    {
        std::cout << "valid input ./RPN [string]" << std::endl;
        return 1;
    }
    else
    {
        int n = 0;
        for(int i = 0; argv[1][i] ; i++)
        {
           // std::cout << "["<< i<<"]"<< argv[1][i];
            n =  (i+2)/2; 
            //std::cout  << "i: " << i << std::endl;  
        }
        //std::cout<< "number: " << n << std::endl;
        char * arr = new char[n];
        int k=0,j = 0;
        while(k < n*2)
        {
            if (argv[1][k] != 32 && argv[1][k] != '\0')//32 space
            {
                arr[j] = argv[1][k];
               // std::cout << "argv: "<<argv[1][k] << " arr [" << j<< "]: "<< arr[j] << std::endl;
                j++; 
            }
            k++;
        }

        //valid check
        
        for (int l = 0; l < n ; l++)
        {
            if (arr[l] != '+' && arr[l] != '-' && arr[l] != '*' && arr[l] != '/' && !isdigit(arr[l]))
            {
                std::cerr <<  "Error" << std::endl;
                return 1;
            } 
           
        }
       RPN::calculation(arr);
        
        
        delete [] arr;
    }
   
    return 0;
}
