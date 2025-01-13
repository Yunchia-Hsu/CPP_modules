/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:41:33 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/13 18:16:45 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data data;
	data.n = 666;

	uintptr_t serial = Serializer::serialize(&data);
   
	Data* deserial = Serializer::deserialize(serial);

	std::cout << "original data address: " << &data << std::endl;
	std::cout << "serialize data address: " << serial << std::endl;
	std::cout << "deserialize data address: " << deserial << std::endl;

	if (&data == deserial)
		std::cout << "pointer matched;" << std::endl;
	else
		std::cout << "pointer NOT matched;" << std::endl;

	std::cout << "original data: " << data.n << std::endl;
	std::cout << "deserialize data: " <<deserial->n << std::endl;
	if (data.n == deserial->n)
		std::cout << "data matched;" << std::endl;
	else
		std::cout << "data NOT matched;" << std::endl;
	
}