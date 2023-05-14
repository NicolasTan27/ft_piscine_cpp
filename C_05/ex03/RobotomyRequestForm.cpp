/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:08:37 by ntan              #+#    #+#             */
/*   Updated: 2022/08/20 16:47:03 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45)
{
	std::cout << "Standard RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "Default RobotomyRequestForm Destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : Form(cpy.getName(), cpy.getSignGrade(), cpy.getExecGrade())
{
	std::cout << "Copy RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& cpy)
{
	std::cout << "Copy Assignment RobotomyRequestForm Constructor" << std::endl;
	if (this == &cpy)
		return (*this);
	else
		return ( *( new(this) RobotomyRequestForm(cpy) ) );
}

////////////////////////////////////////////////////////////////////

void			RobotomyRequestForm::beExecuted() const
{
	static int j = 1;
	int x = 0;
	std::srand(std::time(0));

	for (int i = 0; i < j ; i++) 
	{
		x = 7;
		while (x > 6)
		{
			x = 1 + std::rand() % 6;
		}
	}
	j++;

	if (x % 2 == 0)
	{
		std::cout << " *drill noise* ... " << this->getTarget() << " has been robotomized !" << std::endl;
	}
	else
	{
		std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
	}
}
		