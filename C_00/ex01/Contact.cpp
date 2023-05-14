/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:36:12 by ntan              #+#    #+#             */
/*   Updated: 2022/06/10 20:59:48 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::addFirstName(std::string entry)
{
	first_name = entry;
}

void Contact::addLastName(std::string entry)
{
	last_name = entry;
}

void Contact::addNickName(std::string entry)
{
	nickname = entry;
}

void Contact::addPhoneNumber(std::string entry)
{
	phone_number = entry;
}

void Contact::addDakestSecret(std::string entry)
{
	darkest_secret = entry;
}

std::string Contact::getFirstName()
{
	return (first_name);
}

std::string Contact::getLastName()
{
	return (last_name);
}

std::string Contact::getNickName()
{
	return (nickname);
}

std::string Contact::getPhoneNumber()
{
	return (phone_number);
}

std::string Contact::getDarkestSecret()
{
	return (darkest_secret);
}