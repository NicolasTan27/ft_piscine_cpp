/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:33:26 by ntan              #+#    #+#             */
/*   Updated: 2022/07/19 19:09:22 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public virtual ClapTrap
{
	public :
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap&);
		FragTrap &operator=(const FragTrap&);

		FragTrap(std::string name);
		void	attack(const std::string& target);
		void	highFivesGuys();
};

#endif