/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:16 by yhsu              #+#    #+#             */
/*   Updated: 2024/10/01 15:27:41 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
	cout << endl;
	cout << "\033[34m[Constructing]\n\033[0m" << endl;
	const Animal	*meta[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			meta[i] = new Cat();
			if (meta[i] == NULL)
			{
				//perror("Cat couldn't be allocated!");
				cerr << "Exiting process now";
				exit(1);
			}
		}
		else
		{
			meta[i] = new Dog();
			if (meta[i] == NULL)
			{
				//perror("Dog couldn't be allocated!");
				cerr << "Exiting process now";
				exit(1);
			}
		}
		cout << endl;
	}
	cout << endl;

	cout << "\033[34m[Testing]\n\033[0m" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << "Animal _type: " << meta[i]->getType() << endl;
		meta[i]->makeSound();
		cout << endl;
	}
	cout << endl;

	cout << "\033[34m[Deconstructing]\n\033[0m" << endl;
	for (int i = 0; i < 10; i++)
		delete(meta[i]);

	cout << endl << endl;
	
	///////////////////////////////////////////
	
	cout << "\033[38;5;213m[showing that the copy constructor creates a deep copy]" << std::endl;
	cout << endl;

	cout << "\033[34m[Constructing]\n\033[0m" << endl;
	Dog *a = new Dog();
	//Cat *a = new Cat();
	if (a == NULL)
	{
		perror("Allocation failed");
		cerr << "Exiting the process now." << endl;
		exit(1);
	}

	a->setIdea(0, "I want to buy a new house!");
	a->setIdea(1, "Give me your $$$$!!!");
	a->setIdea(2, "Let's go party!!!");
	a->setIdea(3, "Wake up dude!");
	a->setIdea(4, "go to Hive and study!!!");
	
	cout << "\nIncorrect input: " << endl;
	a->setIdea(200, "no idea");
	cout << endl;

	Dog *b = new Dog(*a);
	//Cat *b = new Cat(*a);
	if (b == NULL)
	{
		perror("Allocation failed");
		cerr << "Exiting the process now." << endl;
		exit(1);
	}
	cout << endl;

	cout << "\033[34m[Testing a]\n\033[0m" << endl;
	cout << "The " << a->getType() << " a has the following ideas: " << endl;
	a->getIdeas();
	
	cout << endl;

	cout << "\033[34m[Deconstructing a]\n\033[0m" << endl;
	delete(a);
	cout << endl;

	cout << "\033[34m[Testing b]\n\033[0m" << endl;
	
	cout << "\nIncorrect input: " << endl;
	b->setIdea(101, "no idea");
	cout << "The " << b->getType() << " b has the following ideas: " << endl;
	b->getIdeas();

	cout << endl;

	cout << "\033[34m[Deconstructing b]\n\033[0m" << endl;
	delete(b);

	return (0);
}

