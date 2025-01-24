/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:40:20 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/24 14:52:56 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
# include <cstdlib>
# include <stdexcept>

template<typename T>

class Array
{
private:
	T * arr;
	unsigned int arrsize;//array size
public:
	Array();
	Array(unsigned int size);
	~Array();
	Array(const Array<T>& from);
	Array<T>& operator=(const Array<T>& from);
	T& operator[](unsigned int index);
	
	unsigned int size() const;
	
};

template<typename T>
Array<T>::Array()
{
	this->arr = nullptr;
	this->arrsize = 0;
}
template<typename T>
Array<T>::Array(unsigned int number)
{
	this->arr = new T[number];
	this->arrsize = number;
		
}
template<typename T>
Array<T> :: ~Array()
{
	std::cout << "destructor called" << std::endl;
	delete[] this->arr;// deallocate memory for an array of objects
}

template<typename T>
Array<T>::Array(const Array<T>& from)
{
	std::cout <<"copy constructor " << std::endl;
	this->arrsize = from.arrsize;
	this->arr = new T[arrsize] ;
	for (unsigned int i = 0; i < from.arrsize; i++)
	{
		this->arr[i] = from.arr[i];
	}
}
template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& from)
{
	if (this != &from)
	{
		std::cout <<"assignment opertor = called" << std::endl;
		delete[] this->arr;
		this->arrsize = from.arrsize;
		this->arr = new T[this->arrsize] ;
		for (unsigned int i = 0; i < from.arrsize; i++)
		{
			this->arr[i] = from.arr[i];
		}
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) 
{
	//std::cout <<"operator [] called" << std::endl;
	if (index >= this->arrsize )
		throw std::out_of_range("Index out of range");
	
	return this->arr[index]; 
}

template<typename T>
unsigned int Array<T>::size() const
{
	return this->arrsize;	
};


#endif