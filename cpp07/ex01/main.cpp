/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:24:23 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/14 15:48:58 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


int main ()
{
	std::string strarr[] = {"apple", "cake", "banana"};
	int intarr[]= {42, 888};

	iter(intarr, 2, arrprint);
	iter(intarr, 2, arrincrement);
	iter(intarr, 2, arrprint);
	iter(strarr, 3, arrprint);
	