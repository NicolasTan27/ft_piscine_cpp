/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:45:42 by ntan              #+#    #+#             */
/*   Updated: 2022/08/24 13:08:59 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <climits>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define IMPOSSIBLE 5

int		findType(std::string str)
{
	int f = 0;
	int dots = 0;
	int	digits = 0;

	if (str.size() == 1)
	{
		if (std::isdigit(str[0]) == 0)
			return (CHAR);
		else
			return (INT);
	}
	
	for (unsigned long i = 0; i < str.size(); i++)
	{
		if (i == 0 && str[i] == '-')
			;
		else if (str[i] == '.')
			dots++;
		else if (str[i] == 'f')
			f++;
		else if (std::isdigit(str[i]) == 0)
			return (IMPOSSIBLE);
		else if (std::isdigit(str[i]) != 0)
			digits++;
	}

	if (digits == 0)
		return (IMPOSSIBLE);
	else if (dots == 0 && f == 0)
		return (INT);
	else if (dots == 1 && f == 1 && str[str.size() - 1] == 'f')
	{
		if (std::atof(str.c_str()) == static_cast<int> (std::atof(str.c_str())))
			return (INT);
		return (FLOAT);
	}
	else if (dots == 1 && f == 0)
	{
		if (std::atof(str.c_str()) == static_cast<int> (std::atof(str.c_str())))
			return (INT);
		return (DOUBLE);
	}
	return (IMPOSSIBLE);
}

void	printChar(char val)
{
	std::cout << "char    : " << val << std::endl;
	std::cout << "int     : " << static_cast<int>(val) << std::endl;
	std::cout << "float   : " << static_cast<float>(val) << ".0f" << std::endl;
	std::cout << "double  : " << static_cast<double>(val) << ".0" << std::endl;
}

void 	printInt(double val)
{
	if ((val >= 0 && val <= 31) || val == 127)
		std::cout << "char    : " << "Non affichable" << std::endl;
	else if (val > 31 && val < 127)
		std::cout << "char    : " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char    : " << "impossible" << std::endl;

	if (val > INT_MAX || val < INT_MIN)
		std::cout << "int     : " << "impossible" << std::endl;
	else
		std::cout << "int     : " << static_cast<int>(val) << std::endl;

	std::cout << "float   : " << static_cast<float>(val) << ".0f" << std::endl;

	std::cout << "double  : " << static_cast<double>(val) << ".0" << std::endl;
}

void	printFloat(double val)
{
	if ((val >= 0 && val <= 31) || val == 127)
		std::cout << "char    : " << "Non affichable" << std::endl;
	else if (val > 31 && val < 127)
		std::cout << "char    : " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char    : " << "impossible" << std::endl;

	if (val > INT_MAX || val < INT_MIN)
		std::cout << "int     : " << "impossible" << std::endl;
	else
		std::cout << "int     : " << static_cast<int>(val) << std::endl;

	std::cout << "float   : " << static_cast<float>(val) << "f" << std::endl;

	std::cout << "double  : " << static_cast<double>(val) << ".0" << std::endl;
}

void	printDouble(double val)
{
	if ((val >= 0 && val <= 31) || val == 127)
		std::cout << "char    : " << "Non affichable" << std::endl;
	else if (val > 31 && val < 127)
		std::cout << "char    : " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char    : " << "impossible" << std::endl;

	if (val > INT_MAX || val < INT_MIN)
		std::cout << "int     : " << "impossible" << std::endl;
	else
		std::cout << "int     : " << static_cast<int>(val) << std::endl;

	std::cout << "float   : " << static_cast<float>(val) << "f" << std::endl;

	std::cout << "double  : " << static_cast<double>(val) << std::endl;
}

void	printImpossble(void)
{
	std::cout << "char    : " << "impossible" << std::endl;
	std::cout << "int     : " << "impossible" << std::endl;
	std::cout << "float   : " << "impossible" << std::endl;
	std::cout << "double  : " << "impossible" << std::endl;
}

int		special(char* str)
{
	if (std::atof(str))
	{
		std::cout << "char    : " << "impossible" << std::endl;
		std::cout << "int     : " << "impossible" << std::endl;
		std::cout << "float   : " << std::atof(str) << "f" << std::endl;
		std::cout << "double  : " << std::atof(str) << std::endl;
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2 && av[1][0])
	{
		int i = 0;
		while(std::isspace(av[1][i]))
			i++;
		int j = i;
		while(!(std::isspace(av[1][j])))
			j++;
		av[1][j] = 0;

		if (findType(&av[1][i]) == CHAR)
			printChar(av[1][i]);
		else if (findType(&av[1][i]) == INT)
			printInt(std::atof(&av[1][i]));
		else if (findType(&av[1][i]) == FLOAT)
			printFloat(std::atof(&av[1][i]));
		else if (findType(&av[1][i]) == DOUBLE)
			printDouble(std::atof(&av[1][i]));
		else
		{
			if (special(av[1]))
				return (0);
			printImpossble();
		}
	}
	return (0);
}