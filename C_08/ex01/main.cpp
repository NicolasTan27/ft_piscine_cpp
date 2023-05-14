/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:19:06 by ntan              #+#    #+#             */
/*   Updated: 2022/10/26 15:33:25 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int	main()
{
	std::cout << "\n========= SUBJECT TEST =========\n" << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	// sp.printSpan();

	std::cout << "\n=========LOT OF NUMBERS=========\n" << std::endl;

	std::srand(std::time(NULL));
	try
	{
		Span span(10000);

		for (int i = 0; i < 100; i++)
			span.addNumber(rand() % 10000000 + 1);
		span.printSpan();
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;	
	}

	std::cout << "\n=========THROW EXCEPTION=========\n" << std::endl;

	try
	{
		Span span(10);

		for (int i = 0; i < 12; i++)
		{
			std::cout << "add at index : " << i << std::endl;
			span.addNumber((int) rand() % 1000000 + 1);
		}
		span.printSpan();
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;	
	}
	
	std::cout << "\n=========ADD_RANGE=========\n" << std::endl;

	{
		int		IntTab[] = {23, 87, 11, 46, 65, -43, 2, -20, 74, 50, 90, -79, 1};
		std::vector<int>	vecTab(IntTab, IntTab + 13);
		Span	bigspan(15);
		
		bigspan.addRange(vecTab.begin(), vecTab.end());
		// bigspan.addRange(IntTab, IntTab + 5);
		bigspan.printSpan();
		std::cout << bigspan.shortestSpan() << std::endl;
		std::cout << bigspan.longestSpan() << std::endl;
	
		// Span	littlespan(2);
		// try
		// {	
		// 	littlespan.addRange(vecTab.begin(), vecTab.end());
		// 	bigspan.printSpan();
		// }
		// catch (std::exception & e)
		// {
		// 	std::cerr << e.what() << std::endl;
		// }
	}
	

	return (0);
}