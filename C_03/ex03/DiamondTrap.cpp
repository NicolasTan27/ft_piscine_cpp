/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:43:24 by ntan              #+#    #+#             */
/*   Updated: 2022/07/23 17:06:48 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

// int _hit_points = FragTrap::_hit_points;
// int _energy_points = ScavTrap::_energy_points;
// int _attack_damage = FragTrap::_energy_points;

DiamondTrap::DiamondTrap() : ClapTrap()
{
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Default Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap named Constructor Called" << std::endl;
}

void DiamondTrap::printInfos()
{
	ClapTrap::printInfos();
}

void	DiamondTrap::attack(const std::string& target)
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		_energy_points--;
		std::cout << "DiamondTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage !" << std::endl;
	}
	else
	{
		if (_hit_points <= 0 && _energy_points <= 0)
			std::cout << "DiamondTrap " << _name << " cannot attack, it has no hit points and no energy points left !" << std::endl;
		else if (_energy_points <= 0)
			std::cout << "DiamondTrap " << _name << " cannot attack, it has no energy points left !" << std::endl;
		else if (_hit_points <= 0)
			std::cout << "DiamondTrap " << _name << " cannot attack, it has no hit points left !" << std::endl;
	}
}

void	DiamondTrap::guardGate()
{
	ScavTrap::guardGate();
}