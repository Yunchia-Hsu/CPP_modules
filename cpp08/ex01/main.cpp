

#include "Span.hpp"
#include <iostream>
#include <vector>
int main ()
{
    
    Span array = (10);
    
        array.addNumber(1);
        array.addNumber(10);
        array.addNumber(3);
        array.addNumber(4);
        array.addNumber(2);
    
        // std::cout <<  "span array: { ";
        // for (int i = 0; i < 11; i++)
        // {
        //     std::cout  << array.arr[i];
        //     if (i != 10)
        //         std::cout << ", ";
        // }
        // std::cout <<  " } \n";

	
    std::cout << "\033[32mTest add an int array: \033[0m\n";
    std::vector<int> array2 = {11,12,13};
    array.addnumberarr(array2.begin(), array2.end());
    //  std::cout <<  "span array2: { ";
	// for (int i = 0; i < 11; i++)
	// {
    //     std::cout  << array.arr[i];
    //     if (i != 10)
    //         std::cout << ", ";
    // }
	// std::cout <<  " } \n";
////////////////////////////////////////
    std::cout << "\033[32mTest shortest and longest: \033[0m\n";
    try
    {
        std::cout << "longestSpan: " << array.longestSpan() << std::endl;
        std::cout << "shortestSpan: " << array.shortestSpan() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
////////////////////////////////////////  
    std::cout << "\033[32mTest numerous numbers in the array: \033[0m\n";
    std::vector<int>  max = {1, 2, 3, 4, 10};
   
    max.insert(max.end(), 50000 ,1); //added 50000 1 in the vector
    std::cout << "max longestSpan: " << array.longestSpan() << std::endl;
    std::cout << "max shortestSpan: " << array.shortestSpan() << std::endl;
////////////////////////////////////////

    std::cout << "\033[32mTest shortest exception \033[0m\n";
    Span except(10);
    except.addNumber(1);
    try 
    {
        except.shortestSpan();
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
////////////////////////////////////////
     std::cout << "\033[32mTest longest exception \033[0m\n";
    Span except2(10);
    except2.addNumber(1);
    try 
    {
        except2.longestSpan();
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    } 
////////////////////////////////////////
    std::cout << "\033[32mTest exception \033[0m\n";
    Span noadd(5);
    noadd.addNumber(1);
    noadd.addNumber(2);
    noadd.addNumber(3);
    noadd.addNumber(4);
    noadd.addNumber(5);   
    try 
    {
        noadd.addnumberarr(array2.begin(), array2.end());
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    } 
    return 0;
}

//PDF TEST
//int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }
