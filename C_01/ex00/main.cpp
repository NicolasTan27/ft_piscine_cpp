/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:35:03 by ntan              #+#    #+#             */
/*   Updated: 2022/07/04 18:03:21 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	// Heap Allocated Zombie
	Zombie *allocated_zombie = newZombie("NewZombie75017");
	allocated_zombie->announce();
	delete allocated_zombie;

	// Stack Allocated Zombie
	randomChump("RandomZombie75017");

	return (0);
}