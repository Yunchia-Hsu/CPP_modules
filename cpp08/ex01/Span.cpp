/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:21:43 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/29 19:15:42 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N):N(N)
{}

Span::~Span()
{}

Span::Span(const Span& from)
{
	this->N = from.N;
	this->arr = from.arr;
}


Span& Span::operator= (const Span& from)
{
	if (this != &from) 
		this->N = from.N;
		this->arr = from.arr;
		
	return *this;
}

void Span::addNumber(int addn)
{
	if (this->N == arr.size())
	{
		throw std::range_error("The ARRAY is FULL.");
		return;
	}
	else 
		arr.push_back(addn);
}
		
void Span::addnumberarr(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	
	unsigned int totalnumber = this->arr.size() + std::distance(first, last); // dixtance gives the number elements bwt to iterators
	if (totalnumber > this->N)
	{
		throw std::range_error("The ARRAY doesn't have enough space for the new array.");
		return;
	}
	else
	{
		while (first != last)
		{
			this->arr.push_back(*first);
			first++;
		}
	}
}
	
int Span::longestSpan()
{
	//如果容器裡的數字小於 2（包含 0 或 1 筆資料），就沒有辦法計算距離，必須丟出例外。
	if (this->arr.size() < 2)
	{
		throw std::range_error("The ARRAY doesn't have enough elements to calculate the span.");
		return 1;
	}
	
	unsigned int  diff;

	unsigned int smallest = *(std::min_element(arr.begin(), arr.end()));
	unsigned int greatest = *(std::max_element(arr.begin(), arr.end()));
	diff = greatest - smallest;
	return diff; 
}

int Span::shortestSpan()
{
	if (arr.size() < 2)
	{
		throw std::range_error("The ARRAY doesn't have enough elements to calculate the span.");
		//return 1; throw will execite exit after thrown
	}
	std::vector<int> copy  = arr;
	std::sort(copy.begin(), copy.end());
	

	int span = copy[1] - copy[0];
	for (int i = 1 ; i < ((int)arr.size() - 1); i++)
	{
		if ((copy[i+1] - copy[i]) < span)	
			span = copy[i+1] - copy[i];
	}
	return span;
	
}

