/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:54:26 by ntan              #+#    #+#             */
/*   Updated: 2022/06/20 17:57:53 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void	Harl::info(void)
{
	std::cout
	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Harl::warning(void)
{
	std::cout
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string level)
{
	std::vector<std::string> functions(4);
	functions[0] = "DEBUG";
	functions[1] = "INFO";
	functions[2] = "WARNING";
	functions[3] = "ERROR";

	void (Harl::*f_ptr[4]) (void);
	f_ptr[0] = &Harl::debug;
	f_ptr[1] = &Harl::info;
	f_ptr[2] = &Harl::warning;
	f_ptr[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == functions[i])
			(this->*f_ptr[i])();
	}
}