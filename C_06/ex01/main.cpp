/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:50:06 by ntan              #+#    #+#             */
/*   Updated: 2022/10/24 13:27:28 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}


Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data test;
	test.a = 2;
	test.b = 3;
	Data *ptr = &test;
	
	std::cout << ptr << std::endl;
	std::cout << serialize(ptr) << std::endl;
	std::cout << deserialize(serialize(ptr)) << std::endl;
	
	return (0);
}