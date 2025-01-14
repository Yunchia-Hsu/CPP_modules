/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:00:21 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/14 14:06:42 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base * generate(void)
{

	int i = std::rand() % 3;
	
	switch (i)
	{
		case 0:
			return new A();
		
		case 1:
			return new B();
		
		case 2:
			return	new C();
		default:
			return nullptr;
		
	}	
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "1rst identify: Class A." << std::endl; 	
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "1rst identify: Class B." << std::endl; 	
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "1rst identify: Class C." << std::endl; 	
	}
	else
		std::cout << "1rst identify: unknown class" << std::endl; 
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);	
		std::cout << "2nd identify: Class A." << std::endl; 
		(void)a; 
		return;
	}
	catch(std::bad_cast &) // not &e because no error message
	{}
	
	try
	{
		B& b = dynamic_cast<B&>(p);	
		std::cout << "2nd identify: Class B." << std::endl; 
		(void)b;
		return;
	}
	catch(std::bad_cast &) 
	{}
	
	try
	{
		C& c = dynamic_cast<C&>(p);	
		std::cout << "2nd identify: Class C." << std::endl; 
		(void)c;
		return;
	}
	catch(std::bad_cast &) 
	{}
}


int main()
{
	std::srand(std::time(0));//主要目的是初始化随机数种子，使得每次运行程序时的随机数序列不同。
	Base *p;
	p = generate();
	identify(p);
	identify(*p);// why *p??
	identify(nullptr);
	delete p;
	std::cout<< "\033[31mRandom Test\033[0m\n";

	for(int i = 0; i < 10; i++)
	{
		Base *r;
		r = generate();
		identify(r);
		identify(*r);
		delete r;
	}
}