/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:35:58 by ntan              #+#    #+#             */
/*   Updated: 2022/08/02 14:34:14 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog"; 
	this->brain = new Brain();
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Default Destructor" << std::endl;
}

Dog::Dog(Dog const& cpy) : Animal()
{
	std::cout << "Dog Copy Constructor" << std::endl;
	this->type = cpy.type; 
	this->brain = new Brain(*(cpy.brain));
}

Dog& Dog::operator=(const Dog& cpy)
{
	std::cout << "Dog Copy Assignament Constructor" << std::endl;
	if (this != &cpy)
	{
		delete brain;
		this->brain = new Brain(*(cpy.brain));
		this->type = cpy.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog : WoufWouf je suis un chien" << std::endl;
}

void	Dog::newIdea(std::string idea)
{
	brain->addIdea(idea);
}

void	Dog::showBrain()
{
	brain->showIdeas();
}