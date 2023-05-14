/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:59:57 by ntan              #+#    #+#             */
/*   Updated: 2022/06/10 20:59:33 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	public :

	void addFirstName(std::string entry);
	void addLastName(std::string entry);
	void addNickName(std::string entry);
	void addPhoneNumber(std::string entry);
	void addDakestSecret(std::string entry);

	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();

	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif