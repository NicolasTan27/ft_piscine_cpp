/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:32:17 by ntan              #+#    #+#             */
/*   Updated: 2022/07/18 15:32:30 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected :
		std::string		_name;
		int				_hit_points;
		int				_energy_points;
		int				_attack_damage;
		
	public :
		ClapTrap();
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap&);

		ClapTrap(std::string name);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			printInfos(void);
		
};

#endif