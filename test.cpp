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
	
	
	
};

int main()
{
	car mine("haha", 1990);
	

	car yours("hehe", 2024);
	

	return 0;
}