#include <iostream>

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
	car mine("haha", 1990);
	

	car yours("hehe", 2024);

	sample1 sample111('h', 5, 1.1);
	

	return 0;
}