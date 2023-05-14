/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:27:22 by ntan              #+#    #+#             */
/*   Updated: 2022/08/17 14:35:22 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int	const			_signGrade;
		int const			_execGrade;
		
	public:
		Form();
		Form(const Form&);
		~Form();
		Form &operator=(const Form&);

		Form(std::string name, int signGrade, int execGrade);

		std::string		getName() const;
		bool			isSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		void			beSigned(Bureaucrat &bt);
		void			doSign();
		
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw ();
		};
	
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw ();
		};
};

std::ostream	&operator<<(std::ostream &flux, Form const& form);

#endif