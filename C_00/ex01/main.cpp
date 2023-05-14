/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:58:05 by ntan              #+#    #+#             */
/*   Updated: 2022/06/14 15:42:35 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void	my_exit()
{
	;
}

int	main(void)
{
	std::string cmd;
	PhoneBook phonebook;
	
	while (1)
	{
		if (std::cin.eof())
			break;
		std::cout << "Enter your command (ADD, SEARCH, EXIT) :" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break;
		if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Command not found" << std::endl;
		std::cout << std::endl;
	}
	return (0);
}