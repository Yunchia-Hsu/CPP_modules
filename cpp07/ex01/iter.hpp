/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:32:08 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/14 15:41:56 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template  <typename T>

void	iter(T* address, int len, void (*f) (T&))
{
	for (int i = 0; i < len; i++)
	{
		
			(*f)(address[i]);
			
	}
};
template  <typename T>
void arrincrement(T& number)
{
	number++;	
};
template  <typename T>
void arrprint(T& string)
{
	std::cout<< string << std::endl;
};

#endif