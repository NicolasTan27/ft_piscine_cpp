/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:39:37 by ntan              #+#    #+#             */
/*   Updated: 2022/07/31 16:39:56 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

// DEFAULT

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Default Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& cpy)
{
	this->_name = cpy._name;
	this->_hit_points = cpy._hit_points;
	this->_energy_points = cpy._energy_points;
	this->_attack_damage = cpy._attack_damage;
	std::cout << "Copy Constructor Called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& cpy)
{
	this->_name = cpy._name;
	this->_hit_points = cpy._hit_points;
	this->_energy_points = cpy._energy_points;
	this->_attack_damage = cpy._attack_damage;
	std::cout << "Copy Assignament Constructor Called" << std::endl;

	return (*this);
}

// PERSONALIZED

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "ClapTrap named Constructor Called" << std::endl;
}

void ClapTrap::printInfos(void)
{
	std::cout << "-----------" << std::endl;
	std::cout << "name : " << _name << std::endl;
	std::cout << "hp   : " << _hit_points << std::endl;
	std::cout << "ep   : "<< _energy_points << std::endl;
	std::cout << "ad   : "<< _attack_damage << std::endl;
	std::cout << "-----------" << std::endl;	
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage !" << std::endl;
	}
	else
	{
		if (_hit_points <= 0 && _energy_points <= 0)
			std::cout << "ClapTrap " << _name << " cannot attack, it has no hit points and no energy points left !" << std::endl;
		else if (_energy_points <= 0)
			std::cout << "ClapTrap " << _name << " cannot attack, it has no energy points left !" << std::endl;
		else if (_hit_points <= 0)
			std::cout << "ClapTrap " << _name << " cannot attack, it has no hit points left !" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		_energy_points--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " is repaired of " << amount << " point(s) of damage, current health : " << _hit_points << std::endl;
	}
	else
	{
		if (_hit_points <= 0 && _energy_points <= 0)
			std::cout << "ClapTrap " << _name << " cannot be repaired, it has no hit points and no energy points left !" << std::endl;
		else if (_energy_points <= 0)
			std::cout << "ClapTrap " << _name << " cannot be repaired, it has no energy points left !" << std::endl;
		else if (_hit_points <= 0)
			std::cout << "ClapTrap " << _name << " cannot be repaired, it has no hit points left !" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " took " << amount << " point(s) of damage, current health : " << _hit_points << std::endl;
	}
	else
	{
		if (_hit_points <= 0)
			std::cout << "ClapTrap " << _name << "cannot take any additional damage, it has no hit points left !" << std::endl;
	}
}
