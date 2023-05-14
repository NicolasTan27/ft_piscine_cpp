/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:28:53 by ntan              #+#    #+#             */
/*   Updated: 2022/08/08 18:41:30 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat bob("Bob", 140);
		Bureaucrat carl("Carl", 1); 
		Bureaucrat noname;
		noname = carl;
		std::cout << noname << std::endl;
		Bureaucrat robert("Robert", 0);
		
		Bureaucrat riprobert("RipRobert", 1); 
		std::cout << "CE MESSAGE NE VA PAS APPARAITRE" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;
	
	try
	{
		Bureaucrat bob("Bob", 145);
		
		for (int i = 0; i < 10; i++)
			bob.gradeDown();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;
	return (0);
}