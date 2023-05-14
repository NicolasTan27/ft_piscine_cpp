/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:24:39 by ntan              #+#    #+#             */
/*   Updated: 2022/06/19 16:17:02 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :

	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon &weapon);
	
	private :
	
	std::string		_name;
	Weapon			*_weapon;
};

#endif