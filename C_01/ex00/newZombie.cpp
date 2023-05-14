/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:35:09 by ntan              #+#    #+#             */
/*   Updated: 2022/06/15 15:57:59 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* newZombie(std::string name)
{
	Zombie *temp = new Zombie;
	temp->set_name(name);
	return (temp);
}