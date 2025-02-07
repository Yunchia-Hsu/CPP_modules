
#include <iostream>
#include "BitcoinExchange.hpp"




int main (int argc , char ** argv)
{
    BitcoinExchange	BTE;
    (void)argc;
    if (argc != 2)
    {
        std::cout << "please enter a filename eg. ./btc <filename> " << std::endl;
        return 1;
    }
    else if (BTE.getcheck() == false)
    {
        std::cerr << "Error: the csv file failed to open." << std::endl;
        return 1;
    }
    else
    {
        BitcoinExchange btc;
        std::ifstream outfile(argv[1]);
        if (!outfile.is_open())
        {
            std::cout << "Error: could not open file." << std::endl;
            return 1;
        }

		
        btc.readsaveInput(argv[1]);   
    }
    return 0;
}
/*> 
./btc
Error: could not open file.
$> ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-03 => 1.2 = 0.36
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
*/