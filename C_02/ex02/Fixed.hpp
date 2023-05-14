/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:58:04 by ntan              #+#    #+#             */
/*   Updated: 2022/07/13 19:00:50 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed &operator=(const Fixed&);

		Fixed(int const value);
		Fixed(float const value);

		int operator>(Fixed const& right);
		int operator<(Fixed const& right);
		int operator>=(Fixed const& right);
		int operator<=(Fixed const& right);
		int operator==(Fixed const& right);
		int operator!=(Fixed const& right);
		Fixed operator+(Fixed const& right);
		Fixed operator-(Fixed const& right);
		Fixed operator*(Fixed const& right);
		Fixed operator/(Fixed const& right);
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed& operator++(void); // pre increment
		Fixed& operator--(void); // pre increment

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;

		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(Fixed const &a, Fixed const &b);
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(Fixed const &a, Fixed const &b);

	private :
		int					integer;
		const static int	fpart;
};

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed);

#endif