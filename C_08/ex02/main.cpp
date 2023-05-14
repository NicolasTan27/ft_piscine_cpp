/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:33:22 by ntan              #+#    #+#             */
/*   Updated: 2022/10/26 15:39:50 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int	main()
{
	MutantStack<int> test;
	MutantStack<int> copytest;

	test.push(5);
	test.push(10);
	test.push(24);
	test.push(41);
	copytest = test;
	test.pop();
	test.push(-29);
	test.push(42132);
	test.push(32);
	
	std::cout << "\n=======TEST=======\n" << std::endl;
	MutantStack<int>::iterator  it = test.begin();
	MutantStack<int>::iterator  end = test.end();
	int i = 0;
	while (it != end)
	{
		std::cout << "[" << i << "] = " << *it << std::endl;
		it++;
		i++;
	}

	std::cout << "\n=======COPYTEST=======\n" << std::endl;

	MutantStack<int>::iterator  cit = copytest.begin();
	MutantStack<int>::iterator  cend = copytest.end();
	int ci = 0;
	while (cit != cend)
	{
		std::cout << "[" << ci << "] = " << *cit << std::endl;
		cit++;
		ci++;
	}
	// copytest.print_mstack();

	std::cout << "\n=======REV_IT=======\n" << std::endl;

	MutantStack<std::string> mstackstring;
	MutantStack<std::string> copymstackstring;

	mstackstring.push("salut");
	mstackstring.push("coucou");
	mstackstring.push("bonjour");
	mstackstring.push("byebye");

	MutantStack<std::string>::reverse_iterator	rev_it = mstackstring.rbegin();
	MutantStack<std::string>::reverse_iterator	rev_itend = mstackstring.rend();	
	while (rev_it != rev_itend)
		std::cout << *(rev_it++) << std::endl;

	std::cout << "\n==============\n" << std::endl;
	
	copymstackstring = mstackstring;
	MutantStack<std::string>::reverse_iterator	copyrev_it = copymstackstring.rbegin();
	MutantStack<std::string>::reverse_iterator	copyrev_itend = copymstackstring.rend();	
	while (copyrev_it != copyrev_itend)
		std::cout << *(copyrev_it++) << std::endl;

	std::cout << "\n==============\n" << std::endl;
	
	MutantStack<char> iterable_stack;
	for (char letter = 'a'; letter <= 'z'; letter++)
		iterable_stack.push(letter);
	for (MutantStack<char>::iterator it = iterable_stack.begin(); it != iterable_stack.end(); it++)
	{
		std::cout << *it;
	}
	
	std::cout << "\n==============\n" << std::endl;
	
	return (0);
}


// int main()
// {
// 	std::cout << "\n====== STACK ======\n" << std::endl;

// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

// #include <list>
// int main()
// {
// 	std::cout << "\n====== LIST ======\n" << std::endl;

// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << mstack.back() << std::endl;
// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::list<int> s(mstack);
// 	return 0;
// }