/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:48:06 by ntan              #+#    #+#             */
/*   Updated: 2022/10/24 18:43:31 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template void decrement(int& val);

void	increment(int& val)
{
	val++;
}

void	replace_a_by_Z(char &c)
{
	if (c == 'a')
		c = 'Z';
}

int	main()
{
	std::cout << "\n=============\n" << std::endl;
	
	int tab[3];
	tab[0] = 1;
	tab[1] = 10;
	tab[2] = 34;

	iter(tab, 3, increment);
	for (int i = 0; i < 3; i++)
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;

	std::cout << "\n=============\n" << std::endl;

	int tab2[3];
	tab2[0] = 7;
	tab2[1] = 12;
	tab2[2] = 45;

	iter(tab2, 3, decrement);
	for (int i = 0; i < 3; i++)
		std::cout << "tab2[" << i << "] = " << tab2[i] << std::endl;

	std::cout << "\n=============\n" << std::endl;
	
	char str[14] = "salut ca va ?";
	iter(str, 14, replace_a_by_Z);
	std::cout << str << std::endl;

	std::cout << "\n=============\n" << std::endl;
	
	return (0);
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//   Awesome tab2[5];

//   iter( tab, 5, print<int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }