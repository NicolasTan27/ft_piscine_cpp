/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:39:50 by ntan              #+#    #+#             */
/*   Updated: 2022/08/15 14:28:17 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	{
		ScavTrap bobby("Bobby");
	
		bobby.attack("Le boa");
		bobby.beRepaired(10);
		bobby.takeDamage(5);
		bobby.printInfos();

		ScavTrap bobbycoppy(bobby);
		bobbycoppy.printInfos();

		ScavTrap bobbycoppy2("bobbycopy2");
		bobbycoppy2.printInfos();
		bobbycoppy2 = bobbycoppy;
		bobbycoppy2.printInfos();
	}
	std::cout << "\n===========\n" << std::endl;
	{
		ScavTrap tobby;
		tobby.guardGate();
		tobby.printInfos();
	}
	std::cout << std::endl;
	return 0;
}