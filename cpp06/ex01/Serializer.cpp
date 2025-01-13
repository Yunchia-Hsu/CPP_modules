/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:41:59 by yhsu              #+#    #+#             */
/*   Updated: 2025/01/13 18:22:47 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}
Serializer::~Serializer()
{}
Serializer::Serializer(const Serializer& from)
{
	(void)from;
}

Serializer& Serializer::operator= (const Serializer& from)
{
	(void)from;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)//把指標變成數字（序列化）。
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)//把數字變回指標（反序列化）。
{
	return reinterpret_cast<Data*>(raw);
}