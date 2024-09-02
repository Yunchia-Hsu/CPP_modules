#include <iostream>

const int Max_int = 1000;

class sample1
{
	
	public:
		float const pi;
		int qd;

	sample1(float const f);
	~sample1(void);	
	void bar(void)const;
	// public:
	// 	char a1;
	// 	int a2;
	// 	float a3;
	// 	sample1(char a1, int a2, float a3);
	// 	~sample1(void);
};

// sample1:: sample1(char p1, int p2, float p3)
// {
// 	std::cout<<"constructor called" << std::endl;
// 	this->a1 = p1;
// 	std::cout << "this->a1 " << this->a1 << std::endl;
// 	this->a2 = p2;
// 	std::cout << "this->a2 " << this->a2 << std::endl;
// 	this->a3 = p3;
// 	std::cout << "this->a3 " << this->a3 << std::endl;
// 	return;
// }

sample1:: sample1(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)//initialization list
{
	std::cout<<"constructor called" << std::endl;
	
	std::cout << "this->a1 " << this->a1 << std::endl;
	
	std::cout << "this->a2 " << this->a2 << std::endl;
	
	std::cout << "this->a3 " << this->a3 << std::endl;
	return;
}

sample1::~sample1(void)
{
	std::cout << "destructor called"<< std::endl;
}

int main ()
{
	sample1 instance1('a', 42, 4.2f);
	return 0;
}