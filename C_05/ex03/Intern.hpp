/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:20:25 by ntan              #+#    #+#             */
/*   Updated: 2022/08/20 18:42:44 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
# define INTERN

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public	:
		Intern();
		~Intern();
		Intern (const Intern&);
		Intern	&operator=(const Intern&);

		Form	*makeForm(std::string formType, std::string formTarget);
};

# endif