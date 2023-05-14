/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:35:13 by ntan              #+#    #+#             */
/*   Updated: 2022/06/17 15:29:02 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void randomChump(std::string name)
{
	Zombie zombie;
	zombie.set_name(name);
	zombie.announce();
}