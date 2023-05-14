/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:02:25 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 15:06:20 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	int res = 0;
	Fixed a(-10);
	Fixed b = 5;
	Fixed c;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	res = a > b;
	std::cout << "a > b is " << res << std::endl;
	res = a < b;
	std::cout << "a < b is " << res << std::endl;
	std::cout << std::endl;

	a = b;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	res = a <= b;
	std::cout << "a <= b is " << res << std::endl;
	res = a < b;
	std::cout << "a < b is " << res << std::endl;
	res = a >= b;
	std::cout << "a >= b is " << res << std::endl;
	res = a > b;
	std::cout << "a > b is " << res << std::endl;
	res = a == b;
	std::cout << "a == b is " << res << std::endl;
	res = a != b;
	std::cout << "a != b is " << res << std::endl;
	std::cout << std::endl;
	
	a = -8;
	b = 7;
	c = a + b;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "a + b is " << c << std::endl;
	std::cout << std::endl;

	c = a - b;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "a - b is " << c << std::endl;
	std::cout << std::endl;

	Fixed d(5.05f);
	Fixed e(2);
	Fixed f;
	f = d + e;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "d + e is " << f << std::endl;
	std::cout << std::endl;

	c = a * b;
	f = d * e;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "a * b is " << c << std::endl;
	std::cout << std::endl;

	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "d * e is " << f << std::endl;
	std::cout << std::endl;

	a = 8;
	b = 4;
	c = a / b;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "a / b is " << c << std::endl;
	std::cout << std::endl;

	std::cout << "doing a++ : " << a++ << std::endl;
	std::cout << "now a is " << a << std::endl;

	a = 0;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	a = 5;
	std::cout << "a is " << a << std::endl;
	std::cout << "doing a-- : " << a-- << std::endl;
	std::cout << "now a is " << a << std::endl;
	std::cout << "doing --a : " << --a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "max a b is " << Fixed::max(a, b) << std::endl;
	std::cout << "min a b is " << Fixed::min(a, b) << std::endl;
	std::cout << std::endl;


	{
		std::cout << std::endl;
		std::cout << "SUBJECT TESTS" << std::endl;
		std::cout << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	return 0;
}