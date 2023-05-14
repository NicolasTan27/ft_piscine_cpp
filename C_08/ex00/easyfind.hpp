/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:30:17 by ntan              #+#    #+#             */
/*   Updated: 2022/10/25 16:38:03 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
int	easyfind(T container, int value)
{
	int i = 0;
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == value)
			return (*it);
		i++;
	}
	throw (std::exception());
}

#endif 