/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:18:43 by ntan              #+#    #+#             */
/*   Updated: 2022/07/31 16:45:56 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fpart = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	integer = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed& Fixed::operator=(const Fixed& cpy)
{
	std::cout << "Copy assignament operator called" << std::endl;
	this->integer = cpy.getRawBits();

	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member called" << std::endl;
	
	return (integer);
}

void Fixed::setRawBits(int const raw)
{
	integer = raw;
	std::cout << "setRawBits member called" << std::endl;
}