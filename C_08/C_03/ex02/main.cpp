/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:39:50 by ntan              #+#    #+#             */
/*   Updated: 2022/07/19 14:40:30 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	{
		FragTrap bobby("Bobby");
		
		bobby.highFivesGuys();
		bobby.attack("Le boa");
		bobby.printInfos();
	}
	std::cout << std::endl;
	{
		FragTrap tobby;
		
		tobby.highFivesGuys();
		tobby.beRepaired(1);
		tobby.printInfos();
	}
	std::cout << std::endl;
	return 0;
}