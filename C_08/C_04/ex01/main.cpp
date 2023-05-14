/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:37:22 by ntan              #+#    #+#             */
/*   Updated: 2022/08/02 14:30:00 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "\n===Subject Test===\n" << std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "\n==================\n" << std::endl;

	Brain	bob;
	Brain	bob2(bob);

	bob.addIdea("Poire");
	bob.addIdea("Pomme");
	bob2 = bob;
	bob.addIdea("Cassis");
	bob.addIdea("Banane");
	bob.showIdeas();
	bob2.showIdeas();

	std::cout << "\n==================\n" << std::endl;

	Cat		kiwi;
	Cat		notKiwi(kiwi);

	kiwi.newIdea("Fish");
	kiwi.newIdea("Milk");
	kiwi.newIdea("Knacki");
	std::cout << "\nKIWI BRAIN\n" << std::endl;
	kiwi.showBrain();

	std::cout << "\nNOTKIWI BRAIN\n" << std::endl;
	notKiwi.showBrain();

	std::cout << "\nAFTER KIWI = NOTKIWI\n" << std::endl;
	notKiwi = kiwi;
	notKiwi.showBrain();

	std::cout << "\nNOTKIWI ADDING MANGO\n" << std::endl;
	notKiwi.newIdea("Mango");

	std::cout << "\nNOTKIWI BRAIN\n" << std::endl;;
	notKiwi.showBrain();
	std::cout << "\nKIWI BRAIN\n" << std::endl;
	kiwi.showBrain();
	
	std::cout << "\n==================\n" << std::endl;
	return 0;
}