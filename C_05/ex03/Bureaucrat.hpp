/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:32:21 by ntan              #+#    #+#             */
/*   Updated: 2022/08/17 18:46:12 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <string>
# include <iostream>

class Form;

class Bureaucrat
{
	public :
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat&);
		Bureaucrat &operator=(const Bureaucrat&);
		
		Bureaucrat(std::string name, int grade);
		std::string		getName() const;
		int				getGrade() const;
		void			gradeUp();
		void			gradeDown();
		void			signForm(Form &form);
		void			executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
				
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

	private :
		std::string const	name;
		int					grade;
};

std::ostream &operator<<(std::ostream &flux, Bureaucrat const& bureaucrat);

#endif