/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:41:27 by ntan              #+#    #+#             */
/*   Updated: 2022/10/25 15:55:37 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
	public :
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span&);
		Span &operator=(const Span&);

		void			addNumber(int value);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			printSpan();

		template <typename Iter>
		void			addRange(Iter first, Iter last)
		{
			while (first != last)
			{
				this->addNumber(*first);
				first++;
			}
		}

	private :
		unsigned int			n;
		unsigned int			index;
		std::vector<int>			tab;
};

#endif