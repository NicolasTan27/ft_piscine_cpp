/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:48:25 by ntan              #+#    #+#             */
/*   Updated: 2022/10/24 19:05:16 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <class T>
void	decrement(T& val)
{
	val--;
}

template <class T>
void iter(T *tab, int size, void (&f)(T&))
{
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

// template <class T>
// void iter(T *tab, int size, void (&f)(const T&))
// {
// 	for (int i = 0; i < size; i++)
// 		f(tab[i]);
// }

template <class T>
void iter(const T *tab, int size, void (&f)(const T&))
{
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

#endif