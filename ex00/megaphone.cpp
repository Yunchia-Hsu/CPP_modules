/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <student.hive.fi>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:03:07 by yhsu              #+#    #+#             */
/*   Updated: 2024/09/02 16:49:07 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_upper_case(char **argv)
{
	int i = 1;
	while(argv[i])
	{
		int j = 0;
		while(argv[i][j])
		{
			std::cout <<(char)toupper((unsigned char)argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}


int main(int argc, char **argv)
{
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		print_upper_case(argv);
	return 0;
}