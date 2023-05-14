/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:01:25 by ntan              #+#    #+#             */
/*   Updated: 2022/06/19 16:19:54 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main()
{

	std::cout << "SUBJECT TEST :" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << std::endl;

	std::cout << "MY TEST :" << std::endl;
	{
		Weapon pencil = Weapon("pencil");
		Weapon keyboard = Weapon("keyboard");
		HumanA xavier("Xavier", pencil);
		xavier.attack();
		pencil.setType("some other type of pencil");
		xavier.attack();
		xavier.setWeapon(keyboard);
		xavier.attack();
	}
	return 0;
} 