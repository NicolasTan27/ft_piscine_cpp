/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:18:43 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 14:57:42 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fpart = 8;

Fixed::Fixed()
{
	this->integer = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->integer = value << this->fpart;
}
		
Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->integer = (int) roundf(value * (1 << this->fpart));
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
	// std::cout << "getRawBits member called" << std::endl;

	return (integer);
}

void Fixed::setRawBits(int const raw)
{
	this->integer = raw;
	// std::cout << "setRawBits member called" << std::endl;
}

int Fixed::toInt(void) const
{
	return (this->integer >> this->fpart);
}

float Fixed::toFloat() const
{
	return ((float) this->integer / (float) (1 << this->fpart));
}

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed)
{
	flux << fixed.toFloat();
	return (flux);
}