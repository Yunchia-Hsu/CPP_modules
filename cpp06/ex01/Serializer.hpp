/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:41:56 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/13 18:19:17 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
學習如何將電腦記憶體中的「指標」（用來指向資料的特殊工具）變成可以儲存或傳遞的數字，然後再把這個數字還原回指標。
*/
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

struct Data
{
	int n;	
};

class Serializer
{
private:
	Serializer();
	~Serializer();
	Serializer(const Serializer& from);
	Serializer& operator= (const Serializer& from); 
public:
	static uintptr_t serialize(Data* ptr);//把指標變成數字（序列化）。
	static Data* deserialize(uintptr_t raw);//把數字變回指標（反序列化）。
};

#endif