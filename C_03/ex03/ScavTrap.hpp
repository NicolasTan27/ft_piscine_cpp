/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:30:59 by ntan              #+#    #+#             */
/*   Updated: 2022/07/19 18:51:46 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public virtual ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap&);

		ScavTrap(std::string name);
		
		void guardGate();
		void attack(const std::string& target);
};

#endif