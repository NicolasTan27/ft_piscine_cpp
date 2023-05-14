/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:37:22 by ntan              #+#    #+#             */
/*   Updated: 2022/08/15 14:35:45 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n===Subject Test===\n" << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n==================\n" << std::endl;

	Cat bob3;
	bob3.makeSound();
	std::cout << bob3.getType() << std::endl;
	Cat bob2(bob3);
	std::cout << bob2.getType() << std::endl;
	bob2 = bob3;
	std::cout << bob2.getType() << std::endl;

	std::cout << "\n==================\n" << std::endl;

	WrongAnimal *a = new WrongCat();

	std::cout << "The WrongCat is a : " << a->getType() << std::endl;
	std::cout << "But it says :" << std::endl;
	a->makeSound();
	std::cout << "Because it was casted as an animal without using virtual function !" << std::endl;
	delete a;
	
	std::cout << "\n==================\n" << std::endl;

	return 0;
}