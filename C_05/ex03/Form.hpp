/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:27:22 by ntan              #+#    #+#             */
/*   Updated: 2022/08/17 22:44:13 by ntan             ###   ########.fr       */
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
		std::string			_target;
		bool				_signed;
		int	const			_signGrade;
		int const			_execGrade;
		
	public:
		Form();
		Form(const Form&);
		virtual ~Form() = 0;
		Form &operator=(const Form&);

		Form(std::string name, std::string target, int signGrade, int execGrade);
		Form(std::string name, int signGrade, int execGrade);

		std::string		getName() const;
		std::string		getTarget() const;
		bool			isSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		void			beSigned(Bureaucrat &bt);
		void			execute(Bureaucrat const & executor) const;
		virtual void	beExecuted() const;
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