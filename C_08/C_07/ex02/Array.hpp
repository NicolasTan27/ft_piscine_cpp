/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:38:57 by ntan              #+#    #+#             */
/*   Updated: 2022/10/24 13:38:18 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array
{
	public :
		Array();
		~Array();
		Array(const Array<T>& src);
		Array &operator=(const Array<T>& src);

		Array(unsigned int size);
		T &operator[](unsigned int index) const;
		unsigned int	size() const;		
	
	private :
		unsigned int 	_size;
		T				*elements;
};

#endif