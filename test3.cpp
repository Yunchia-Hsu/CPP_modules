#include <iostream>

class person 
{
	private:
		std::string name;

	public:
		std::string getName() const
		{
			return name;
		}

	void setName(const std::string&newName)
	{
		if (!newName.empty())
			name = newName;
		else	std::cout << "you should type a name" << std::endl;
	}
};

int main ()
{
	person person1;
	person1.setName("vicky");
	std::cout << "the person1's name is: " << person1.getName() << std::endl;

	return 0;
}
