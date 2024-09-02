#include <iostream>
#include <cmath>
#include <string>

class car
{
public: 
// attributes
	std::string brand;
	int year;

	car(std::string b, int y)
	{
		brand = b;
		year = y;
		std::cout << "car constructed: " << brand << ", year: " << year << std::endl;	
	}
	
	~car()
	{
		std::cout << "destructor: car constructed " << brand << " ,year: " << year << std::endl;
	}
	
};

class sample1
{
public:
	char a1;
	int i1;
	float f1;
	sample1(char a1, int i1, float f1);
	
	~sample1(void);

};


sample1::sample1(char a1, int i1, float f1)
{
	this->a1 = a1;
	this->i1 = i1;
	this->f1 = f1;
	std::cout << "constructed called " << a1 <<"int is: " << i1 << "and fload is: " << f1 << std::endl;
	return ;
};



int main()
{
	std::string greeting = "hello";
	//std::cin >> greeting;
	
	greeting.insert(3, "ooo");
	std::cout << greeting << std::endl;
	greeting.erase(7,1);
	std::cout << greeting << std::endl;
	std::cout << greeting.find_first_of("!") <<std::endl;
	//greeting.replace(greeting.find("a"),5, "Heaven");
	//greeting.append(" there!");
	//getline(std::cin, greeting);//get input
	std::cout << greeting << std::endl;
	
	// std::cout << greeting + " how are you"<< std::endl;
	// std::string complete_greeting = greeting + "how are you";
	// complete_greeting += "?";
	// std::cout << complete_greeting << std::endl;
	// std::cout << complete_greeting.length() << std::endl;
 

	// std::cout << floor(-1.5) << std::endl;
	// std::cout << trunc(-1.5) << std::endl;
	// std::cout << ceil(-1.5) << std::endl;
	// std::cout << round(-1.45) << std::endl;
	// std::cout << round(-1.55) << std::endl;
	// car mine("haha", 1990);
	// car yours("hehe", 2024);
	// sample1 sample111('h', 5, 1.1);
	return 0;
}