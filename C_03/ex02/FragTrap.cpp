/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:33:29 by ntan              #+#    #+#             */
/*   Updated: 2022/08/15 14:13:05 by ntan             ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap const& cpy) : ClapTrap()
{
	this->_name = cpy._name;
	this->_hit_points = cpy._hit_points;
	this->_energy_points = cpy._energy_points;
	this->_attack_damage = cpy._attack_damage;
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& cpy)
{
	this->_name = cpy._name;
	this->_hit_points = cpy._hit_points;
	this->_energy_points = cpy._energy_points;
	this->_attack_damage = cpy._attack_damage;
	std::cout << "FragTrap Copy Assignament Constructor Called" << std::endl;

	return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap Named Constructor Called" << std::endl;
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