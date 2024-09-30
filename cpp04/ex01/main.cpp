/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:16 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 16:09:04 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

using std::string;
using std::cout;
using std::endl;

int main()
{
    cout << "\033[95mConstructing\033[0m" << endl;

	std::cout << "\033[36m" << "\n---Constructing objs---\n" << "\033[0m";
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << "\033[36m" << "\n---Destructing objs---\n" << "\033[0m";
	delete j;
	delete i;

	// cout << "-------------------------------------------------------" << endl;

	// cout << endl;
	// cout << "\033[34mConstructing\033[0m" << endl;


	// cout << "-------------------------------------------------------" << endl;

	// cout << endl;
	// cout << "\033[36mConstructing\033[0m" << endl;


	// cout << "-------------------------------------------------------" << endl;

	// cout << endl;
	// cout << " \033[0;32mConstructing\033[0m" << endl;


	// cout << "-------------------------------------------------------" << endl;

	// cout << "\033[38;5;213mConstructing\033[0m" << endl;


    return 0;
}
