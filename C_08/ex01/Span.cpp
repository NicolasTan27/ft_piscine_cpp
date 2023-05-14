/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:44:40 by ntan              #+#    #+#             */
/*   Updated: 2022/10/26 15:05:09 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(0), index(0), tab(0)
{
	
}

Span::Span(unsigned int n) : n(n), index(0), tab(n)
{
	
}

Span::~Span()
{
	this->tab.clear();
}

Span::Span(const Span& src)
{
	*this = src;
}

Span&	Span::operator=(const Span& src)
{
	if (this != &src)
	{
		if (this->tab.size() != 0)
			this->tab.clear();
		this->n = src.n;
		for (unsigned int i = 0; i < src.n; i++)
			this->tab[i] = src.tab[i];
	}
	return (*this);
}

//////////////// MEMBER FUNCTIONS /////////////////

void			Span::addNumber(int value)
{
	if (this->index >= n)
		throw (std::exception());
	else
	{
		this->tab[index] = value;
		index++;
	}
}

unsigned int	Span::shortestSpan()
{
	if (this->index <= 1)
		throw (std::exception());

	// unsigned int	min = 4294967295;
	// for (unsigned int i = 0; i < this->index - 1; i++)
	// {
	// 	for (unsigned int j = i + 1; j < this->index; j++)
	// 	{
	// 		if ((unsigned int)abs(this->tab[i] - this->tab[j]) < min)
	// 			min = abs(this->tab[i] - this->tab[j]);
	// 	}
	// }
	std::vector<int> copy(tab.begin(), tab.begin() + index);
	std::sort(copy.begin(), copy.begin() + index);
	size_t	min = abs(*(--copy.end()) - *(copy.begin()));
	for (size_t i = 0; i < copy.size() - 1; i++)
	{
		// std::cout << i << " : " << copy[i] << std::endl;
		if ( (size_t) abs(copy[i] - copy[i + 1]) < min)
		{
			min = (size_t)abs(copy[i] - copy[i + 1]);
			// std::cout << i << " : " << copy[i] << ", " << i + 1 << " : " << copy[i + 1] << std::endl;
		}
	}
	
	return (min);
}

unsigned int	Span::longestSpan()
{
	if (this->index <= 1)
		throw (std::exception());
	// std::vector<int>::iterator it = (tab.begin() + this->index);
	// return ( *(std::max_element(tab.begin(), it)) - *(std::min_element(tab.begin(), it) )) ;
	// std::cout << "tab end : " << *(--tab.end()) << std::endl;
	return (*(std::max_element(tab.begin(), tab.begin() + index)) - *(std::min_element(tab.begin(), tab.begin() + index)));
}

void			Span::printSpan()
{
	for (unsigned int i = 0; i < this->index; i++)
		std::cout << "[" << i << "] = " << this->tab[i] << std::endl;
	std::cout << "Min : " << *(std::min_element(tab.begin(), tab.begin() + index)) << std::endl;
	std::cout << "Max : " << *(std::max_element(tab.begin(), tab.begin() + index)) << std::endl;
}