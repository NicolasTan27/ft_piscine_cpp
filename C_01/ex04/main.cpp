/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:39:50 by ntan              #+#    #+#             */
/*   Updated: 2022/06/21 18:34:38 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	str_replace(std::ofstream *outfile, std::string buffer, char *s1, char *s2)
{
	int	i = 0;
	int r_pos = -1;

	while (buffer[i])
	{
		r_pos = buffer.find(s1, i);
		if (r_pos != -1)
		{
			buffer.erase(r_pos, ft_strlen(s1));
			buffer.insert(r_pos, s2);
			i = r_pos + ft_strlen(s2) - 1;
		}
		i++;
	}
	*outfile << buffer;
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}

	std::string buffer;
	std::ifstream	infile(av[1]);
	infile.seekg(0, std::ios::end);
	if (!infile.good())
	{
		std::cout << "ERROR: file not found" << std::endl;
		return (1);
	}
	
	infile.seekg(0, infile.beg);
	if (infile)
	{
		std::string line;
		while (getline(infile, line))
		{
			buffer += line;
			buffer += "\n";
		}
	}
	else
	{
		std::cout << "ERROR: cannot read the file" << std::endl;
		return (1);
	}

	std::string		outfile_name = av[1];
					outfile_name += ".replace";
	std::ofstream	outfile(outfile_name.c_str());
	if (outfile)
	{
		str_replace(&outfile, buffer, av[2], av[3]);
	}
	else
	{
		std::cout << "ERROR: cannot open the file" << std::endl;
		return (1);
	}

	return (0);
}