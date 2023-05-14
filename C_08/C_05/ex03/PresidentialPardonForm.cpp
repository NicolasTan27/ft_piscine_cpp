/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:08:37 by ntan              #+#    #+#             */
/*   Updated: 2022/08/20 16:56:20 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "Default PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5)
{
	std::cout << "Standard PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "Default PresidentialPardonForm Destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy) : Form(cpy.getName(), cpy.getSignGrade(), cpy.getExecGrade())
{
	std::cout << "Copy PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& cpy)
{
	std::cout << "Copy Assignment PresidentialPardonForm Constructor" << std::endl;
	if (this == &cpy)
		return (*this);
	else
		return ( *( new(this) PresidentialPardonForm(cpy) ) );
}

////////////////////////////////////////////////////////////////////

void			PresidentialPardonForm::beExecuted() const
{
	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}
		