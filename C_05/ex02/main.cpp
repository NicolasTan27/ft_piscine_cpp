/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:28:53 by ntan              #+#    #+#             */
/*   Updated: 2022/08/29 15:02:32 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	// std::cout << "\n=====================\n" << std::endl;
	
	// try
	// {
	// 	Bureaucrat 	jack1("Jack1", 50);
	// 	Bureaucrat 	jack2("Jack2", 0);
	// 	Bureaucrat 	jack3("Jack3", 50);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "\n=====================\n" << std::endl;
	
	// try
	// {
	// 	Form		form1("Form1", 150, 100);
	// 	Form		form2("Form2", 0, 151);
	// 	Form		form3("Form3", 150, 100);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "\n=====================\n" << std::endl;

	// try
	// {
	// 	Bureaucrat	michael("Michael", 50);
	// 	Form		driverLicence("Driver Licence", 50, 30);

	// 	driverLicence.beSigned(michael);
	// 	michael.signForm(driverLicence);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// std::cout << "\n=====================\n" << std::endl;

	// try
	// {
	// 	Bureaucrat	michael;
	// 	Form		driverLicence;

	// 	driverLicence.beSigned(michael);
	// 	michael.signForm(driverLicence);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "\n=====================\n" << std::endl;

	// try
	// {
	// 	Bureaucrat 	bob("Bob", 145);
	// 	Form		xcertificate("Xcertificate", 140, 130);

	// 	std::cout << xcertificate << std::endl;
		
	// 	for (int i = 0; i < 10; i++)
	// 		bob.gradeUp();
	
	// 	xcertificate.beSigned(bob);
		
	// 	std::cout << xcertificate << std::endl;
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat jean("Jean", 100);
		ShrubberyCreationForm test;

		// test.beSigned(jean);
		test.execute(jean);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat jean("Jean1", 140);
		ShrubberyCreationForm test;

		test.beSigned(jean);
		test.execute(jean);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat jean("Jean2", 100);
		ShrubberyCreationForm test("jardin");

		test.beSigned(jean);
		test.execute(jean);
		jean.executeForm(test);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat 			jean("Jean3", 10);
		RobotomyRequestForm test("Bob3");

		test.beSigned(jean);
		for (int i = 0; i < 8; i++)
			test.execute(jean);
		jean.executeForm(test);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;

	try
	{
		Bureaucrat 				jean("Jean4", 10);
		PresidentialPardonForm 	test("Bob4");
		
		jean.signForm(test);
		jean.executeForm(test);

		for (int i = 0; i < 5; i++)
			jean.gradeUp();
		
		test.execute(jean);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=====================\n" << std::endl;

	return (0);
}