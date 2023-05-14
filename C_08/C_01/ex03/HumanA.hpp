/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:22:08 by ntan              #+#    #+#             */
/*   Updated: 2022/06/19 16:24:32 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public :

	HumanA(std::string name, Weapon &weapon);
	void		attack();
	void		setWeapon(Weapon &weapon);
	
	private :
	
	std::string		_name;
	Weapon			*_weapon;
};

#endif