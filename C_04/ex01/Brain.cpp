/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:36:39 by ntan              #+#    #+#             */
/*   Updated: 2022/08/03 08:55:04 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	ideasCount = 0;
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain::~Brain()
{
	delete[] ideas;
	std::cout << "Brain Default Destructor" << std::endl;
}

Brain::Brain(Brain const& cpy)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	this->ideas = cpy.getIdeas();
	this->ideasCount = cpy.ideasCount;
}

Brain&	Brain::operator=(const Brain& cpy)
{
	if (this != &cpy)
	{
		delete[] ideas;
		this->ideas = cpy.getIdeas();
		this->ideasCount = cpy.ideasCount;
	}
	std::cout << "Brain Copy Assignament Constructor" << std::endl;
	return (*this);
}

////////////////////////////////

void	Brain::showIdeas() const
{
	for (int i = 0; i < ideasCount; i++)
	{
		std::cout << "ideas [" << i << "] = " << ideas[i] << std::endl;
	}
}

void	Brain::addIdea(std::string idea)
{
	if (ideasCount < 100)
	{
		ideas[ideasCount] = idea;
		ideasCount++;
	}
	else
	{
		std::cout << "No more place for an idea :("<< std::endl;
	}
}

std::string *Brain::getIdeas() const
{
	std::string *tab = new std::string[100];
	for (int i = 0; i < ideasCount; i++)
	{
		tab[i] = ideas[i];
	}
	return (tab);
}

int		Brain::getIdeasCount() const
{
	return (ideasCount);
}