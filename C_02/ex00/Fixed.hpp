/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:58:04 by ntan              #+#    #+#             */
/*   Updated: 2022/07/23 16:54:55 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed &operator=(const Fixed&);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
	
	private :
		int					integer;
		const static int	fpart;
};

#endif