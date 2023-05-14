/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:27:11 by ntan              #+#    #+#             */
/*   Updated: 2022/10/24 18:55:07 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::cout << "\n=============\n" << std::endl;
	
	Array<char> emptyArr;
	
	std::cout << "\n=============\n" << std::endl;

	int *a = new int();
	std::cout << "int *a = new int() : " << *a << std::endl;
	delete a;
	
	std::cout << "\n=============\n" << std::endl;
	
	// int *b = new int[5];
	// b[0] = 10;
	// std::cout << "a[0] : " << b[0] << std::endl;
	// delete []b;
	// Array<int>	intArray(5);
	// intArray[0] = 10;
	// std::cout << "intArray[0] : " << intArray[0] << std::endl;
	// for (unsigned int i = 0; i < intArray.size(); i++)
	// 	std::cout << "intArray[" << i << "] : " << intArray[i] << std::endl;
	
	std::cout << "\n=============\n" << std::endl;
	
    Array<std::string> strArray(3);
    strArray[0] = "bonjour";
    strArray[1] = "bonsoir";
    strArray[2] = "bonne nuit";
	for (unsigned int i = 0; i < strArray.size(); i++)
		std::cout << "[" << i << "] = " << strArray[i] << std::endl;
 
	std::cout << "\n=============\n" << std::endl;
	
    Array<std::string> copy = strArray;
	strArray[0] = "pas bonjour";
    copy[1] = "hello";

	for (unsigned int i = 0; i < strArray.size(); i++)
		std::cout << "[" << i << "] = " << strArray[i] << std::endl;
	for (unsigned int i = 0; i < copy.size(); i++)
		std::cout << "copy [" << i << "] = " << copy[i] << std::endl;
 
	std::cout << "\n=============\n" << std::endl;

	// Array<const std::string> cstringArray(5);
	// std::cout << "cstringArray[0] = " << cstringArray[0] << std::endl;
	// // cstringArray[0] = "salut";
	
	// std::cout << "\n=============\n" << std::endl;

	try
	{	
		copy[3] = "hola";
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=============\n" << std::endl;

	std::vector<int> test;
	test.push_back(19);
	std::vector<int> test1;
	std::vector<int> test2;

	Array<std::vector<int> > vecArray(3);
	vecArray[0] = test;
	vecArray[1] = test1;
	vecArray[2] = test2;
	std::cout << vecArray[0][0] << std::endl;
	
    return 0;
}

// #include <iostream>
// #include "Array.hpp"
// #include "Array.tpp"
// #include <ctime>
// #include <cstdlib>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }

//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
	
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
	
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }