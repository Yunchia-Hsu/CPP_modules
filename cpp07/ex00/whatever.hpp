/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:13:28 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/14 14:26:06 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>

void swap(T& a, T&b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
	
}
template <typename T>
T min(T a, T b)
{
	return a < b ? a : b;
}
template <typename T>
T max(T a, T b)
{
	return a > b ? a : b;
}
#endif