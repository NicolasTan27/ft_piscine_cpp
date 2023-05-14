/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:49:03 by ntan              #+#    #+#             */
/*   Updated: 2022/10/26 14:55:28 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <deque>

// template int easyfind(std::list<int> container, int value);
// template int easyfind(std::vector<int> container, int value);

int	main()
{
	int		intTab[] = {32, 41, 51, 48, 67};

	std::cout << "\n===== LIST =====\n" << std::endl;
	std::list<int> intList(intTab, intTab + 5);
	std::cout << easyfind(intList, 32) << std::endl;

	std::cout << "\n===== VECTOR=====\n" << std::endl;
	std::vector<int>	intVector(intTab, intTab + 5);
	std::cout << easyfind(intVector, 48) << std::endl;

	std::cout << "\n===== DEQUEUE =====\n" << std::endl;
	std::deque<int>	intDeque(intTab, intTab + 5);
	
	std::cout << easyfind(intDeque, 67) << std::endl;
	
	std::cout << "\n===== INVALID VALUES =====\n" << std::endl;

	try
	{
		std::cout << easyfind(intList, 1000000) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << " : Value not found" << std::endl;
	}

	try
	{
		std::cout << easyfind(intVector, -10) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << " : Value not found" << std::endl;
	}

	try
	{
		std::cout << easyfind(intDeque, 56) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << " : Value not found" << std::endl;
	}

	return (0);
}