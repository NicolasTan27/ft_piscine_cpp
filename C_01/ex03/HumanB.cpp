/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:23:15 by ntan              #+#    #+#             */
/*   Updated: 2022/06/19 16:16:59 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

void	HumanB::attack()
{
	std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}