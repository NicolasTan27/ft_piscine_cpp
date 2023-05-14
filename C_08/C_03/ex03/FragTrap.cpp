/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:33:29 by ntan              #+#    #+#             */
/*   Updated: 2022/07/19 19:09:33 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default Destructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap named Constructor" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " wants to do a high five ?!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		_energy_points--;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage !" << std::endl;
	}
	else
	{
		if (_hit_points <= 0 && _energy_points <= 0)
			std::cout << "FragTrap " << _name << " cannot attack, it has no hit points and no energy points left !" << std::endl;
		else if (_energy_points <= 0)
			std::cout << "FragTrap " << _name << " cannot attack, it has no energy points left !" << std::endl;
		else if (_hit_points <= 0)
			std::cout << "FragTrap " << _name << " cannot attack, it has no hit points left !" << std::endl;
	}
}