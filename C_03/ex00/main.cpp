/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:39:50 by ntan              #+#    #+#             */
/*   Updated: 2022/08/15 14:26:10 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap tobby("Tobby");

	tobby.printInfos();
	
	tobby.attack("a bad guy");
	tobby.printInfos();

	tobby.takeDamage(5);
	tobby.printInfos();

	tobby.beRepaired(10);
	tobby.printInfos();

	tobby.takeDamage(20);
	tobby.attack("a random villager");
	tobby.printInfos();

	ClapTrap bernard("Bernard");

	for (int i = 0; i < 12; i++)
		bernard.attack("something weak");
	bernard.printInfos();

	ClapTrap copybernard;
	copybernard = bernard;
	copybernard.printInfos();
	return 0;
}