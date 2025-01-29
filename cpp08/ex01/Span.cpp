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

Span::Span(unsigned int nlimit):nlimit(nlimit)
{}

Span::~Span()
{}

Span::Span(const Span& from)
{
	this->nlimit = from.nlimit;
	this->arr = from.arr;
}


Span& Span::operator= (const Span& from)
{
	if (this != &from) 
		this->nlimit = from.nlimit;
		this->arr = from.arr;
		
	return *this;
}

void Span::addNumber(int addn)
{
	if (this->nlimit == arr.size())
	{
		throw std::range_error("The ARRAY is FULL.");
		return;
	}
	else 
		arr.push_back(addn);
}
		
int Span::shortestSpan(int d)
{
	//如果容器裡的數字小於 2（包含 0 或 1 筆資料），就沒有辦法計算距離，必須丟出例外。
	this->arr.sort();
	unsigned int  deference;
	for (deference ;it != it.end();it++,)
	{
		if (deference < ())
	}	
	return deference; 
}
int Span::longestSpan(int d)
{
	//如果容器裡的數字小於 2（包含 0 或 1 筆資料），就沒有辦法計算距離，必須丟出例外。
}


/*


void	Span::addNumberRange(std::vector<int>::iterator begin,  std::vector<int>::iterator end)
{
	unsigned int projTot = this->arr.size() + std::distance(begin, end);
	if (projTot >= this->N)
	{
		std::cerr << "\033[31mNo more space left in the array\033[0m\n";
		return;
	}
	while (begin != end)
	{
		this->arr.push_back(*begin);
		begin++;
	}
}

unsigned	int	Span::shortestSpan( void )
{
	if (this->arr.size() < 2)
		return 0;
	unsigned int span;
	std::vector<int> sortIt = this->arr;
	std::sort(sortIt.begin(), sortIt.end());
	std::vector<int>::iterator begin = sortIt.begin();
	std::vector<int>::iterator end = sortIt.end();
	unsigned int shortest = std::abs(sortIt[0] - sortIt[1]);
	for (std::vector<int>::iterator i = begin + 1; i < end; i++)
	{
		span = std::abs(*i - *(i - 1));
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

unsigned	int	Span::longestSpan( void )
{
	if (this->arr.size() < 2)
		return 0;
	auto min = std::min_element(this->arr.begin(), this->arr.end());
	auto max = std::max_element(this->arr.begin(), this->arr.end());
	return *max - *min;
}

*/