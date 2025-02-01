
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include<map>
#include<string>
#include<algorithm>
#include<iostream>  
#include<fstream>
#include <exception>
#include <sstream>
#include <cstdlib>
#include <cstring>

#include <iomanip>


class  BitcoinExchange
{
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange( const BitcoinExchange& );
		BitcoinExchange&	operator=( const BitcoinExchange& from);
        bool    opentxt(const std::string &filename,  std::ofstream &outfile);
       
        void    readsaveInput(char *outfile);
        bool getcheck();
      
        std::map<std::string, double>  parsecsv();
        void printresult(std::string date, std::string year, std::string month , std::string day, double value);
        
        void checkdate(std::string  year, std::string  month, std::string day);
        void checkvalue(double value);
    private:
        
        bool check;
        std::map<std::string, double> csvmap;
        
};



#endif