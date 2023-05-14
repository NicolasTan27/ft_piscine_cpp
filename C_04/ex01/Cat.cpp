/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:10:01 by ntan              #+#    #+#             */
/*   Updated: 2022/08/03 08:55:08 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat"; 
	this->brain = new Brain();
	std::cout << "Cat Default Constructor" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Default Destructor" << std::endl;
}

Cat::Cat(Cat const& cpy) : Animal()
{
	std::cout << "Cat Copy Constructor" << std::endl;
	this->type = cpy.type; 
	this->brain = new Brain(*(cpy.brain));
}

Cat& Cat::operator=(const Cat& cpy)
{
	std::cout << "Cat Copy Assignament Constructor" << std::endl;
	if (this != &cpy)
	{
		delete brain;
		this->brain = new Brain(*(cpy.brain));
		this->type = cpy.type;
	}
	return (*this);
}

////////////////////////////////

void	Cat::makeSound() const
{
	std::cout << "Cat : Miaou je suis un chat" << std::endl;
}

void	Cat::newIdea(std::string idea)
{
	brain->addIdea(idea);
}

void	Cat::showBrain()
{
	brain->showIdeas();
}