/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:39:58 by ntan              #+#    #+#             */
/*   Updated: 2022/06/21 18:26:16 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
	{
		contacts[i].addFirstName((char *)"UNDEF");
		contacts[i].addLastName((char *)"UNDEFINEDD");
		contacts[i].addNickName((char *)"UNTRUCUNPEULONG");
		contacts[i].addPhoneNumber((char *)"UNDEFINED");
		contacts[i].addDakestSecret((char *)"UNDEFINED");
	}
	n_contacts = 0;
	index_contact = -1;
}


int	ft_atoi(std::string str)
{
	int i = 0;
	int res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

void	trunc(std::string str)
{
	char res[11];

	if (str.size() > 10)
	{
		int i = 0;
		for (i = 0; i < 9; i++)
		{
			res[i] = str[i];
		}
		res[9] = '.';
	}
	else if (str.size() == 10)
	{
		for (int i = 0; i < 10; i++)
		{
			res[i] = str[i];
		}
	}
	else if (str.size() < 10)
	{
		int i = str.size() - 1;
		int j = 9;
		while (i >= 0)
		{
			res[j] = str[i];
			j--;
			i--;
		}
		while (j >= 0)
		{
			res[j] = ' ';
			j--;
		}
	}
	res[10] = '\0';
	std::cout << res;
}

void PhoneBook::show_contact_info(int id)
{
	if (id + 1 <= n_contacts)
	{
		std::cout << "| ";
		std::cout << std::setw(10);
		std::cout << id + 1;
		std::cout << "|";
		std::cout << std::setw(10);
		trunc(contacts[id].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10);
		trunc(contacts[id].getLastName());
		std::cout << "|";
		std::cout << std::setw(10);
		trunc(contacts[id].getNickName());
		std::cout << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::show_contact_all(int id)
{
	if (id + 1 <= n_contacts)
	{
		std::cout << "Contact " << id + 1 << " informations" << std::endl;
		std::cout << "First Name     : " << contacts[id].getFirstName() << std::endl;
		std::cout << "Last Name      : " << contacts[id].getLastName() << std::endl;
		std::cout << "Nickname       : " << contacts[id].getNickName() << std::endl;
		std::cout << "Phone Number   : " << contacts[id].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << contacts[id].getDarkestSecret() << std::endl;
	}
}

int		PhoneBook::get_n_contacts()
{
	return (n_contacts);
}

void	PhoneBook::add_n_contacts()
{
	n_contacts++;
}

void	PhoneBook::add_index_contact()
{
	index_contact++;
}

void PhoneBook::add_contact()
{
	std::string answer;

	if (n_contacts < 8)
	{
		this->n_contacts++;
	}
	this->index_contact++;
	
	while (1)
	{
		std::cout << "Enter First Name : " << std::endl;
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return;
		contacts[index_contact % 8].addFirstName(answer);
		if (answer != "")
			break;
		else
			std::cout << "Invalid field" << std::endl;
	}

	while (1)
	{
		std::cout << "Enter Last Name : " << std::endl;
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return;
		contacts[index_contact % 8].addLastName(answer);
		if (answer != "")
			break;
		else
			std::cout << "Invalid field" << std::endl;
	}

	while (1)
	{
		std::cout << "Enter Nickname : " << std::endl;
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return;
		contacts[index_contact % 8].addNickName(answer);
		if (answer != "")
			break;
		else
			std::cout << "Invalid field" << std::endl;
	}

	while (1)
	{
		std::cout << "Enter Phonenumber : " << std::endl;
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return;
		contacts[index_contact % 8].addPhoneNumber(answer);
		if (answer != "")
			break;
		else
			std::cout << "Invalid field" << std::endl;
	}

	while (1)
	{
		std::cout << "Enter Darkest Secret : " << std::endl;
		std::getline(std::cin, answer);
		if (std::cin.eof())
			return;
		contacts[index_contact % 8].addDakestSecret(answer);
		if (answer != "")
			break;
		else
			std::cout << "Invalid field" << std::endl;
	}
}

void	PhoneBook::search()
{
	std::string id;

	for (int i = 0; i < 8; i++)
	{
		this->show_contact_info(i);
	}
	if (n_contacts > 0)
	{
		std::cout << std::endl;
		std::cout << "Enter the id of any contact :" << std::endl;
		std::getline(std::cin, id);
		if (std::cin.eof())
			return;
		std::cout << std::endl;
		if ((id == "1" || id == "2" || id == "3" || id == "4" || id == "5" || id == "6" || id == "7" || id == "8")
			&& ft_atoi(id) <= n_contacts)
		{
			this->show_contact_all(ft_atoi(id) - 1);
		}
		else
		{
			std::cout << "Invalid id" << std::endl;
		}
	}
	else
	{
		std::cout << "No entry yet" << std::endl;
	}
}