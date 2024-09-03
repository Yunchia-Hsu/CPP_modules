#include <iostream>

namepace utils
{
	all dunction
}

struct User
{
	std::string firstname;
	std::string lastname;
	std::string get_status()
	{
		return status;
	}
	private:
	std::string status;
};

int main()
{
	User me;
	me.firstname = "yunchia";
	me.lastname = "Hsu";
	//me.status = "premium";

	std::cout << "first name: " << me.firstname << std::endl;
	std::cout << "last name: " << me.lastname << std::endl;
	std::cout << "Status: " << me.get_status() << std::endl;
	return 0;
}