
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    try 
    {
        this->csvmap = parsecsv();
        this->check = true;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: the csv file failed to open." << std::endl;
        this->check = false;
    }
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& from )
{
	*this = from;
}

BitcoinExchange&	BitcoinExchange::operator=( const BitcoinExchange& from)
{
    if (this != &from)
    {
        this->csvmap.clear();
        this->check = from.check;
        this->csvmap = from.csvmap; 
    }
    
    return *this;
}

bool BitcoinExchange::getcheck()
{
    return this->check;
}


bool    BitcoinExchange::opentxt(const std::string &filename, std::ofstream &outfile)
{
    outfile.open(filename);
    if (!outfile.is_open())
    {
        std::cerr<< "Error: the file failed to open." << std::endl;
        return false;
    }
    return true;
}


void BitcoinExchange::checkdate(std::string  year, std::string  month, std::string day)
{
    int y = stoi(year);
    int m = stoi(month);
    int d = stoi(day);

    if (y < 2009 || y > 2022 ||m < 1 || m > 12 || d > 31 || d < 1)
        throw 1;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d > 31)
            throw 1;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 30)
            throw 1;
    }
    else if (m == 2)
    {
        if ((y % 4 == 0 || y % 100 != 0 ) || (y % 400 == 0)) // check leap year
        {
            if (d > 29)
                throw 1;
        }
        else
        {
            if (d > 28)
                throw 1;
        }
    }
}

void BitcoinExchange::checkvalue(double value)
{
    if (value < 0)
        throw 2; // value cannot be negative
    if (value > 1000)
        throw 3; // value cannot be greater than 1000
}

void BitcoinExchange::printresult(std::string date, std::string year, std::string month , std::string day, double value)
{
    if (this->csvmap.count(date))
    {
        std::cout << date << " => " << value << " = " << this->csvmap[date] * value << std::endl;
        return;
    }
    int y = stoi(year);
    int m = stoi(month);
    int d = stoi(day);
    while(y > 2008)
    {
        while(m > 0)
        {
            while(d > 0)
            {
                std::ostringstream newDate;
                newDate << y << "-" << std::setw(2) << std::setfill('0') << m << "-" << std::setw(2) << std::setfill('0') << d;
                std::string result(newDate.str()); 
                if (this->csvmap.count(result))
                {
                    std::cout << date << " => " << value << " = " << this->csvmap[result] * value << std::endl;
                    return;
                }
                d--;
            }
            d = 31;
            m--;
        }
        m = 12;
        y--;
    }
}

void    BitcoinExchange::readsaveInput(char *outfile) //2011-01-03 | 3
{   
    std::string line;
    std::ifstream inputfile(outfile);
    std::getline(inputfile, line);
    while (std::getline(inputfile, line))//getline(輸入串流, 字串變數)
    {
        //outfile << line << std::endl;//for test  

    
        int pos = line.find('|');
        if (line[pos] == line[line.size() - 1])
            throw 1; // no date
        int i;
        for (i = 0; i < (int)(line.size()); i++)//delete right space
        {
            if (line[i] != ' ')
                break;
        }
        
        for (; pos > 0; pos--)//delete left space
        {
            if (line[pos] != ' ' && line[pos] != '|')
                break;
        }
        std::string date = line.substr(i, pos);
        //date = trim(date);//rtrim:去除右邊空格  2011-01-03
        std::string y = date.substr(0, 4); //2011
        std::string m = date.substr(5, 2); //01
        std::string d = date.substr(8, 2); //03
        double value; 
        if (line[pos + 1] == '|')
            throw 1; // no value
        else
            value = stod(line.substr(pos + 1, std::string::npos));//npos 「一直到字串結尾」 3
        try
        {
            checkdate( y, m, d);
            checkvalue(value);
        }
        catch (int e)
        {
            if (e == 1)
                std::cerr << "Error: bad input" << "=> " << line <<std::endl;
            else if (e == 2)
                std::cerr << "Error: not a positive number." << std::endl;
            else if (e == 3)
                std::cerr << "Error: too large a number." << std::endl;
            continue; // ? 
        }
            //2011-01-03   3      
        printresult(date, y, m , d, value);
     
    }
   
}



std::map<std::string, double>  BitcoinExchange::parsecsv()
{
    std::ifstream inputfile; //從文件中讀取數據
    inputfile.open("data.csv");
    if(!inputfile.is_open())
    {
        std::cerr << "Error: the file failed to open." << std::endl;
        throw 1;
    }

    std::map<std::string, double> csvmap;
    std::string line;
    std::string csvdate;
    std::string ratestring;
    double csvrate;   
    getline(inputfile, line);//delete the first line
    while(getline(inputfile, line))
    {
        int pos = line.find(',');
        try 
        {
            csvdate = line.substr(0, pos);
            ratestring = line.substr(pos + 1, std::string::npos);
            csvrate = std::stod(ratestring);// string to double
            csvmap.insert(std::make_pair(csvdate, csvrate));//write data to map
        }
        catch (const std::exception &e)
        {
            throw 1;
        }
    }
    return csvmap;
}


