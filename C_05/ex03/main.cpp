/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:28:53 by ntan              #+#    #+#             */
/*   Updated: 2022/08/29 15:07:07 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

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
	// 	Bureaucrat jean("Jean", 100);
	// 	ShrubberyCreationForm test;

	// 	// test.beSigned(jean);
	// 	test.execute(jean);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "\n=====================\n" << std::endl;

	// try
	// {
	// 	Bureaucrat jean("Jean", 140);
	// 	ShrubberyCreationForm test;

	// 	test.beSigned(jean);
	// 	test.execute(jean);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "\n=====================\n" << std::endl;

	// try
	// {
	// 	Bureaucrat jean("Jean", 100);
	// 	ShrubberyCreationForm test("jardin");

	// 	test.beSigned(jean);
	// 	test.execute(jean);
	// 	jean.executeForm(test);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "\n=====================\n" << std::endl;

	// try
	// {
	// 	Bureaucrat 			jean("Jean", 10);
	// 	RobotomyRequestForm test("Bob");

	// 	test.beSigned(jean);
	// 	for (int i = 0; i < 8; i++)
	// 		test.execute(jean);
	// 	jean.executeForm(test);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "\n=====================\n" << std::endl;

	// try
	// {
	// 	Bureaucrat 				jean("Jean", 10);
	// 	PresidentialPardonForm 	test("Bob");
		
	// 	jean.signForm(test);
	// 	jean.executeForm(test);

	// 	for (int i = 0; i < 5; i++)
	// 		jean.gradeUp();
		
	// 	test.execute(jean);
	// }
	// catch(std::exception & e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	std::cout << "\n=====================\n" << std::endl;

		Intern	someRandomIntern;

		Form	*rf1 = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rf1;
		Form	*rf2 = someRandomIntern.makeForm("robot   omy request", "Bender");
		delete rf2;
		Form	*rf3 = someRandomIntern.makeForm("robotomyrequest", "Bender");
		delete rf3;
		Form	*rf4 = someRandomIntern.makeForm("robotomyrequestoldversion", "Bender");
		delete rf4;

		std::cout << std::endl;

		Form	*rf5 = someRandomIntern.makeForm("shrubberycreation", "Bender");
		delete rf5;
		Form	*rf6 = someRandomIntern.makeForm("shrubbery        creation", "Bender");
		delete rf6;
		Form	*rf7 = someRandomIntern.makeForm("shruation", "Bender");
		delete rf7;

		std::cout << std::endl;

		Form	*rf8 = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rf8;

	std::cout << "\n=====================\n" << std::endl;

	return (0);
}