/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:42:22 by ntan              #+#    #+#             */
/*   Updated: 2022/08/17 22:47:58 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include <string>
# include <iostream>
# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm&);

		ShrubberyCreationForm(std::string target);
		virtual void	beExecuted() const;

};

#endif