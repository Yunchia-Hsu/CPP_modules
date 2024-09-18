/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:50:55 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/18 09:50:56 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

using std::cin;
using std::string;
using std::endl;
using std::cout;

int main(void)
{
    string zb_name;
    int N;
    Zombie *zombiee;

    while(1)
    {
        cout << "---Please name your zombie/zombies:---" << endl;
        getline(cin, zb_name);
        if (cin.eof() == true)
        {
            cin.clear();
            cout << endl;
        }
        if (!zb_name.empty())
        {
            cout << "How many zombies do you want to have ?" << endl;
            
            if (cin >> N)
            {
                cout << "You have " << N << "zombie/ zombies now !" << endl;
                break;
            }
            else if (std::cin.eof())
            {
                cout << "EOF signal received. " << endl;
                break;
            }
            else
            {
                cout << "N should be an integer, please try again."<< endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }
    zombiee = zombieHorde(N, zb_name);
    for (int i = 0; i < N; i++)
    {
        zombiee[i].announce();
        cout << endl;
    }

    delete[] zombiee;
    return 0;
}