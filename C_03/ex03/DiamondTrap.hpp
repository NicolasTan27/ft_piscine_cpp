/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:43:22 by ntan              #+#    #+#             */
/*   Updated: 2022/08/15 14:09:10 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public ScavTrap, FragTrap
{
	public :
		DiamondTrap();
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap&);

		DiamondTrap(std::string name);
		
		void attack(const std::string& target);
		void printInfos(void);

		void	guardGate();
	
	private :
		std::string		_name;
		ClapTrap::name	clapName;
};

#endif