/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:02:59 by ntan              #+#    #+#             */
/*   Updated: 2022/06/19 16:13:12 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public :

	Weapon();
	Weapon(std::string type);

	const std::string	getType();
	void				setType(std::string type);

	private :
	
	std::string		_type;	
};

#endif