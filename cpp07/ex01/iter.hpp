/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:32:08 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/24 15:00:40 by yhsu             ###   ########.fr       */
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
// when the function matches the signature void (*f)(int&) 
// the function can decay to function pointer