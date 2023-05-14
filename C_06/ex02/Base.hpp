/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:27:40 by ntan              #+#    #+#             */
/*   Updated: 2022/10/24 15:12:42 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	public :
		virtual ~Base()
		{
			// std::cout << "Base Default Destructor" << std::endl;
		}	
};

#endif