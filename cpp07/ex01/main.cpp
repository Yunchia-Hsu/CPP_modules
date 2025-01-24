/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:24:23 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/23 19:08:20 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


int main ()
{
	std::string strarr[] = {"apple", "cake", "banana", "cookies"};
	int intarr[]= {42, 888, -56};

	iter(intarr, 3, arrprint);
	iter(intarr, 3, arrincrement);
	
	iter(intarr, 3, arrprint);
	iter(strarr, 4, arrprint);
}
