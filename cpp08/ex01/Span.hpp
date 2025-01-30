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
		
	public:
		Span();
		Span(unsigned int nlimit);
		~Span();
		Span(const Span& from);
		Span& operator= (const Span& from);
		
		void addNumber(int addn);
		int shortestSpan();
		int longestSpan();
		void addnumberarr(std::vector<int>::iterator first, std::vector<int>::iterator last);

		void getnlimit(Span& from);

	//private: for test
		unsigned int nlimit;//max of n interger
		std::vector<int> arr;

};

#endif
