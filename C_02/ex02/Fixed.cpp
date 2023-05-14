/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:18:43 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 14:59:21 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fpart = 8;

Fixed::Fixed()
{
	this->integer = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->integer = value << this->fpart;
}
		
Fixed::Fixed(float const value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->integer = (int) roundf(value * (1 << this->fpart));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& cpy)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->integer = cpy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& cpy)
{
	// std::cout << "Copy assignament operator called" << std::endl;
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

int Fixed::operator>(Fixed const& right)
{
	if (this->integer > right.getRawBits())
		return (1);
	else
		return (0);
}

int Fixed::operator>=(Fixed const& right)
{
	if (this->integer >= right.getRawBits())
		return (1);
	else
		return (0);
}

int Fixed::operator<(Fixed const& right)
{
	if (this->integer < right.getRawBits())
		return (1);
	else
		return (0);
}

int Fixed::operator<=(Fixed const& right)
{
	if (this->integer <= right.getRawBits())
		return (1);
	else
		return (0);
}
int Fixed::operator==(Fixed const& right)
{
	if (this->integer == right.getRawBits())
		return (1);
	else
		return (0);
}

int Fixed::operator!=(Fixed const& right)
{
	if (this->integer != right.getRawBits())
		return (1);
	else
		return (0);
}

Fixed Fixed::operator+(Fixed const& right)
{
	Fixed temp(*this);
	temp.integer = this->integer + right.getRawBits();
	return (temp);
}

Fixed Fixed::operator-(Fixed const& right)
{
	Fixed temp(*this);
	temp.integer = this->integer - right.getRawBits();
	return (temp);
}

Fixed Fixed::operator*(Fixed const& right)
{
	Fixed temp(*this);
	temp.integer = (this->toFloat() * right.toFloat()) * (1 << this->fpart);
	return (temp);
}

Fixed Fixed::operator/(Fixed const& right)
{
	Fixed temp(*this);
	temp.integer = (this->toFloat() / right.toFloat()) * (1 << this->fpart);
	return (temp);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->integer++;
	return (temp);
}

Fixed& Fixed::operator++(void)
{
	this->integer++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->integer--;
	return (temp);
}

Fixed& Fixed::operator--(void)
{
	this->integer--;
	return (*this);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}