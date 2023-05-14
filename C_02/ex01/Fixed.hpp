/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:58:04 by ntan              #+#    #+#             */
/*   Updated: 2022/07/13 18:53:31 by ntan             ###   ########.fr       */
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

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
		void print(std::ostream flux);

	private :
		int					integer;
		const static int	fpart;
};

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed);

#endif