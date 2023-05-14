/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:23:02 by ntan              #+#    #+#             */
/*   Updated: 2022/06/19 16:24:36 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_name = name;
	_weapon = &weapon;
}

void	HumanA::attack()
{
	std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}