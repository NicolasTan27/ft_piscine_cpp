/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:46:13 by ntan              #+#    #+#             */
/*   Updated: 2022/06/20 17:44:23 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	public :
		void	complain(std::string level);

	private :	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif