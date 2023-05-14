/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:35:03 by ntan              #+#    #+#             */
/*   Updated: 2022/07/04 18:08:58 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	// TEST 1
	std::cout << "TEST 1" << std::endl;

	Zombie *zombie = zombieHorde(5, "Bobby");

	for (int i = 0; i < 5; i++)
		zombie[i].announce();

	delete[] zombie;

	std::cout << "END OF TEST 1" << std::endl << std::endl;

	// TEST 2
	std::cout << "TEST 2" << std::endl;

	int n = 3;
	Zombie *zombie2 = zombieHorde(n, "Bryan");

	std::cout << std::endl << "FIRST ANNOUNCE" << std::endl;
	for (int i = 0; i < n; i++)
	zombie2[i].announce();
	
	std::cout << std::endl << "CHANGING ZOMBIE [1] TO 'NOT BRYAN'" << std::endl;
	zombie2[1].set_name("Not Bryan");
	
	std::cout << std::endl << "SECOND ANNOUNCE" << std::endl;
	for (int i = 0; i < n; i++)
	zombie2[i].announce();

	std::cout << std::endl;
	delete[] zombie2;

	return (0);
}