/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:16 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/30 14:50:32 by yhsu             ###   ########.fr       */
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
	const Animal	*ani = new Animal();
	cout << endl;
	cout << "\033[95mTesting\033[0m" << endl;

	cout << "Animal _type: " << ani->getType() << endl;
	ani->makeSound();
	cout << endl;

	cout << "\033[95mDeconstructing\033[0m" << endl;
	delete ani;
	cout << endl;

	cout << "-------------------------------------------------------" << endl;

	cout << endl;
	cout << "\033[34mConstructing\033[0m" << endl;
	const Animal	*kitty = new Cat();
	cout << endl;

	cout << "\033[34mTesting\033[0m" << endl;
	cout << "Cat _type: " << kitty->getType() << endl;
	kitty->makeSound();
	cout << endl;

	cout << "\033[34mDeconstructing\033[0m" << endl;
	delete kitty;
	cout << endl;

	cout << "-------------------------------------------------------" << endl;

	cout << endl;
	cout << "\033[36mConstructing\033[0m" << endl;
	const Animal	*doggy = new Dog();
	cout << endl;
	cout << "\033[36mTesting\033[0m" << endl;
	cout << "Dog _type: " << doggy->getType() << endl;
	doggy->makeSound();
	cout << endl;
	cout << "\033[36mDeconstructing\033[0m" << endl;
	delete doggy;
	cout << endl;

	cout << "-------------------------------------------------------" << endl;

	cout << endl;
	cout << " \033[0;32mConstructing\033[0m" << endl;
	const WrongAnimal	*wrong_animal = new WrongAnimal();
	cout << endl;

	cout << " \033[0;32mTesting\033[0m" << endl;
	cout << "Animal _type: " << wrong_animal->getType() << endl;
	wrong_animal->makeSound();

	cout << endl;

	cout << " \033[0;32mDeconstructing\033[0m" << endl;
	delete wrong_animal;
	cout << endl;

	cout << "-------------------------------------------------------" << endl;

	cout << "\033[38;5;213mConstructing\033[0m" << endl;
	const WrongAnimal	*wrong_cat = new WrongCat();
	cout << endl;

	cout << "\033[38;5;213mTesting\033[0m" << endl;
	cout << "WrongCat _type: " << wrong_cat->getType() << endl;
	wrong_cat->makeSound();
	cout << endl;

	cout << "\033[38;5;213mDeconstructing\033[0m" << endl;
	delete wrong_cat;
	cout << endl;

    return 0;
}
