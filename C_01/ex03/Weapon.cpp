/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:42:38 by ntan              #+#    #+#             */
/*   Updated: 2022/06/19 16:13:08 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
	_type = type;
}

const std::string	Weapon::getType()
{
	return (_type);	
}

void	Weapon::setType(std::string type)
{
	_type = type;
}