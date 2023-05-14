/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:25:18 by ntan              #+#    #+#             */
/*   Updated: 2022/08/17 15:14:59 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Useless"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Default Form Constructor" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) :  _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << this->_name << " Form Constructor with sign/execution grade : " << this->_signGrade << "/" << this->_execGrade << std::endl;
	if (signGrade < 1)
		throw (Form::GradeTooHighException());
	else if (signGrade > 150)
		throw (Form::GradeTooLowException());
		
	if (execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form& cpy) : _name(cpy._name), _signed(false),_signGrade(cpy._signGrade), _execGrade(cpy._execGrade)
{
	std::cout << "Copy Form Constructor" << std::endl;
}

Form::~Form()
{
	// std::cout << "Default Form Destructor" << std::endl;
}

Form& Form::operator=(const Form& cpy)
{
	std::cout << "Copy Assignment Form Constructor" << std::endl;
	if (this == &cpy)
		return (*this);
	else
		return ( *( new(this) Form(cpy) ) );
}

/////////////////////////////////////////////////////////////////////////////////

std::string		Form::getName() const
{
	return (this->_name);
}

bool			Form::isSigned() const
{
	return (this->_signed);
}

int				Form::getSignGrade() const
{
	return (this->_signGrade);
}

int				Form::getExecGrade() const
{
	return (this->_execGrade);
}

void			Form::doSign()
{
	this->_signed = true;
}

void			Form::beSigned(Bureaucrat &bt)
{
	if (bt.getGrade() > this->_signGrade)
	{
		std::cout << this->_name << " Form could not be signed by " << bt.getName() << "at Grade " << bt.getGrade() << " (need " << this->_signGrade << ")" << std::endl;
		throw (Form::GradeTooLowException());
	}
	else
	{
		if (this->_signed == false)
		{	
			std::cout << this->_name << " Form succesfully signed by " << bt.getName() << std::endl;
			this->_signed = true;
		}
		else
			std::cout << this->_name << " Form already signed !" << std::endl;
	}
}

/////////////////////////////////////////////////////////////////////////////////

const char* Form::GradeTooHighException::what() const throw()
{
	return ("EXCEPTION : Grade too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("EXCEPTION : Grade too Low");
}

std::ostream &operator<<(std::ostream &flux, Form const& form)
{
	flux << "Form named " << form.getName() << " requires grade " << form.getSignGrade() << " to be signed and " << form.getExecGrade() << " to be executed." << (form.isSigned() ? " It is already signed." : " It is not signed yet.") << std::endl;
	return (flux);
}