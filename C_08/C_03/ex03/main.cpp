/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:39:50 by ntan              #+#    #+#             */
/*   Updated: 2022/07/19 18:58:37 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	{
		DiamondTrap robert("Robert");

		robert.attack("Bob le bricoleur");
		robert.printInfos();
	}
	std::cout << std::endl;
	{

	}
	std::cout << std::endl;
	return 0;
}