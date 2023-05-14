/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:34:23 by ntan              #+#    #+#             */
/*   Updated: 2022/08/24 18:47:30 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void swap(T& x, T& y)
{
	T	temp;
 
	temp = x;
	x = y;
	y = temp;
}

template <class T>
T min(T x, T y)
{
	return ( x < y ? x : y);
}

template <class T>
T max(T x, T y)
{
	return ( x > y ? x : y);
}

#endif