/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:45:17 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/24 17:09:35 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template<typename T>

typename T::iterator easyfind(T& container , int n)
{
	 typename T::iterator it = std::find(container.begin(), container.end(), n);
     if (it == container.end())
        throw std::runtime_error("value not found");

    return it;
}





template<typename T>
typename T::iterator easyfind(T& container, int n)
{
    typename T outcome = std::find(container:: begin(). container.end(), n);
    if (outcome == container.end())
        throw std::runtime_error("value not found");
};

#endif
