/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:20:19 by ntan              #+#    #+#             */
/*   Updated: 2022/08/20 18:50:55 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
Intern::Intern()
{
	std::cout << "Intern Default Constructor" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor" << std::endl;
}

Intern::Intern (const Intern& cpy)
{
	std::cout << "Intern Copy Constructor" << std::endl;
	*this = cpy;
}

Intern&	Intern::operator=(const Intern& cpy)
{
	std::cout << "Intern Default Constructor" << std::endl;
	(void) cpy;
	return (*this);
}

static std::string	strlower(std::string formSearched)
{
	int i = 0;
	while (formSearched[i])
	{
		if (formSearched[i] >= 'A' && formSearched[i] <= 'Z')
			formSearched[i] -= 32;
		i++;
	}
	return (formSearched);
}

static int	strcpr(std::string formTested, std::string formSearched)
{
	int i = 0;
	int j = 0;
	while (formTested[i] || formSearched[j])
	{
		if (formTested[i] == formSearched[j])
		{
			i++;
			j++;
		}
		else if (formTested[i] != formSearched[j] && formSearched[j] != ' ')
			return (0);
		else if (formSearched[j] == ' ')
			j++;
	}
	return (1);
}

static int	formFinder(std::string formType)
{
	std::string		formList[3] = {"shrubberycreation", "robotomyrequest", "presidentialpardon"};

	for (int i = 0; i < 3; i++)
	{
		if (strcpr(formList[i], strlower(formType)))
			return (i);
	}
	return (-1);
}

Form	*Intern::makeForm(std::string formType, std::string formTarget)
{
	Form	*form = 0;

	switch (formFinder(formType))
	{
		case 0:
			std::cout << "Intern creates Shrubbery Creation Form." << std::endl;
			form = new ShrubberyCreationForm (ShrubberyCreationForm(formTarget));
			break;
		
		case 1:
			std::cout << "Intern creates Robotomy Request Form." << std::endl;
			form = new RobotomyRequestForm (RobotomyRequestForm(formTarget));
			break;

		case 2:
			std::cout << "Intern creates Presidential Pardon Form." << std::endl;
			form = new PresidentialPardonForm (PresidentialPardonForm(formTarget));
			break;
			
		default:
			std::cout << "Intern could not create form " << formType << std::endl;
	}
	return (form);
}