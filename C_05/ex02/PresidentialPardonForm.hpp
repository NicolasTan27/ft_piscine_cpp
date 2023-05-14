/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:29:36 by ntan              #+#    #+#             */
/*   Updated: 2022/08/20 16:48:38 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include <string>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public :
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm&);

		PresidentialPardonForm(std::string target);
		virtual void	beExecuted() const;

};

#endif