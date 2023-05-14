/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:31:33 by ntroberttan       #+#    #+#             */
/*   Updated: 2022/06/07 17:03:19 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string str_upper(std::string str)
{
	for (unsigned long int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	i = 1;
	int j = 0;
	std::string str;

	if (ac > 1)
	{
		j = 0;
		while (i < ac)
		{
			str += str_upper(av[i]);
			i++;
		}
		std::cout << str << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}