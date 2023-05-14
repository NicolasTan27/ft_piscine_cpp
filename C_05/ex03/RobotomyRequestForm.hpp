/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:29:36 by ntan              #+#    #+#             */
/*   Updated: 2022/08/17 22:47:39 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

# include <string>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm&);

		RobotomyRequestForm(std::string target);
		virtual void	beExecuted() const;

};

#endif