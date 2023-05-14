/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:28:53 by ntan              #+#    #+#             */
/*   Updated: 2022/08/17 15:13:19 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "\n=====================\n" << std::endl;
	
	try
	{
		Bureaucrat 	jack1("Jack1", 50);
		Bureaucrat 	jack2("Jack2", 0);
		Bureaucrat 	jack3("Jack3", 50);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;
	
	try
	{
		Form		form1("Form1", 150, 100);
		Form		form2("Form2", 0, 151);
		Form		form3("Form3", 150, 100);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;
	
	try
	{
		Form		form1("Form1", 150, 100);
		Form		form2(form1);
		Form		form3;
		form3 = form2;

		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat	michael("Michael", 50);
		Form		driverLicence("Driver Licence", 50, 30);

		driverLicence.beSigned(michael);
		michael.signForm(driverLicence);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat	michael;
		Form		driverLicence;

		driverLicence.beSigned(michael);
		michael.signForm(driverLicence);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat 	bob("Bob", 145);
		Form		xcertificate("Xcertificate", 140, 130);

		std::cout << xcertificate << std::endl;
		
		for (int i = 0; i < 10; i++)
			bob.gradeUp();
	
		xcertificate.beSigned(bob);
		
		std::cout << xcertificate << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;
	return (0);
}