/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:59:59 by ntan              #+#    #+#             */
/*   Updated: 2022/06/21 18:26:50 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
	public:

	PhoneBook();
	void	show_contact_info(int id);
	void	show_contact_all(int id);
	void	add_contact();
	void	search();
	void	add_index_contact();
	void	add_n_contacts();
	int		get_n_contacts();

	private:

	Contact contacts[8];
	int		n_contacts;
	int		index_contact;
};

#endif