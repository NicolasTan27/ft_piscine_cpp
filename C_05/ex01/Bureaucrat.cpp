/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:44:00 by ntan              #+#    #+#             */
/*   Updated: 2022/08/17 14:36:44 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

//////////////////////CONSTRUCTORS && DESTRUCTORS///////////////////////////////

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{
	std::cout << "Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Constructor for " << name << " with grade " << grade << " called" << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Default Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& cpy) : name(cpy.name), grade(cpy.grade)
{
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& cpy)
{
	std::cout << "Copy Assignment Constructor Called" << std::endl;
	if (this == &cpy)
	{
		return (*this);
	}
	else
	{
		this->~Bureaucrat();
		return (*(new(this) Bureaucrat(cpy)));
	}
}

////////////////////////// METHODS ///////////////////////////////

void	Bureaucrat::gradeUp()
{
	if (grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
	{
		this->grade -= 1;
		std::cout << name << " grade up :) new grade is : " << grade << std::endl;
	}
}

void	Bureaucrat::gradeDown()
{
	if (grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		this->grade += 1;
		std::cout << name << " grade down :( new grade is : " << grade << std::endl;
	}
}

void	Bureaucrat::signForm(Form &form)
{
	// form.beSigned(*this);
	if (this->grade > form.getSignGrade())
	{
		std::cout << this->name << " could not sign the " << form.getName() << " Form because his grade is too low." << std::endl;
		// throw (Bureaucrat::GradeTooLowException());
	}
	else
	{
		if (form.isSigned() == false)
		{
			std::cout << this->name << " succesfully signed the " << form.getName() << " Form." << std::endl;
			form.doSign();
		}
		else
		{
			std::cout << this->name << " could not sign the " << form.getName() << " Form because it is already signed !" << std::endl;
		}
	}
}

//////////////////////////// GET ///////////////////////////////

std::string	Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

//////////////////////////// EXCEPTIONS ///////////////////////////////

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("EXCEPTION : Grade Too Low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("EXCEPTION : Grade Too High");
}

std::ostream &operator<<(std::ostream &flux, Bureaucrat const& bureaucrat)
{
	flux << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (flux);
}