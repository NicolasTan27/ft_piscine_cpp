/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:31:00 by ntan              #+#    #+#             */
/*   Updated: 2022/10/24 15:12:01 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

Base* generate(void)
{
	static int j = 1;
	int x = 0;
	std::srand(std::time(0));

	for (int i = 0; i < j ; i++) 
	{
		x = 4;
		while (x > 3)
		{
			x = 1 + std::rand() % 3;
		}
	}
	j++;

	Base *res;
	if (x == 1)
		res = new A;
	else if (x == 2)
		res = new B;
	else
		res = new C;
	std::cout << x << " was generated." << std::endl; 
	
	return (res);
}

void identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	std::cout << "==========" << std::endl;

	a = dynamic_cast<A*>(p);
	std::cout << a << std::endl;
	b = dynamic_cast<B*>(p);
	std::cout << b << std::endl;
	c = dynamic_cast<C*>(p);
	std::cout << c << std::endl;

	std::cout << "==========" << std::endl;

	if (a != 0)
		std::cout << "A object" << std::endl;
	else if (b != 0)
		std::cout << "B object" << std::endl;
	else
		std::cout << "C object" << std::endl;
}

void identify(Base& p)
{
	std::string		type;

	std::cout << "==========" << std::endl;
	
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << &a << std::endl;
		type = "A";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " A EXCEPTION" << '\n';
	}
	
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << &b << std::endl;
		type = "B";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " B EXCEPTION" << '\n';
	}
	
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << &c << std::endl;
		type = "C";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " C EXCEPTION"<< '\n';
	}
	
	std::cout << "==========" << std::endl;

	std::cout << type << " object" << std::endl;
	
}

int main()
{
	std::cout << "\n=== PTR TEST ===\n" << std::endl;
	
	Base *test;

	test = generate();
	identify(test);

	delete test;

	std::cout << "\n=== REF TEST ===\n" << std::endl;

	Base &test_ref = *generate();
	identify(test_ref);

	delete &test_ref;

	return (0);
}