/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:56:58 by ntan              #+#    #+#             */
/*   Updated: 2022/07/18 15:30:20 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap named Constructor Called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << "enters in gate keeper mode !" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		_energy_points--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage !" << std::endl;
	}
	else
	{
		if (_hit_points <= 0 && _energy_points <= 0)
			std::cout << "ScavTrap " << _name << " cannot attack, it has no hit points and no energy points left !" << std::endl;
		else if (_energy_points <= 0)
			std::cout << "ScavTrap " << _name << " cannot attack, it has no energy points left !" << std::endl;
		else if (_hit_points <= 0)
			std::cout << "ScavTrap " << _name << " cannot attack, it has no hit points left !" << std::endl;
	}
}