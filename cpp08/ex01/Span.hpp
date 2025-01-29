/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:21:40 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/29 19:03:06 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include<iostream>
#include<exception>
#include <vector>
#include <algorithm>
  
class Span
{
	private:
		unsigned int nlimit;//max of n interger
		std::vector<int> arr;
		
	public:
		Span();
		Span(unsigned int nlimit);
		~Span();
		Span(const Span& from);
		Span& operator= (const Span& from);
		
		void addNumber(int addn);
		unsigned int shortestSpan(int d);
		unsigned int longestSpan(int d);
		

		void getnlimit(Span& from);

};

#endif
e