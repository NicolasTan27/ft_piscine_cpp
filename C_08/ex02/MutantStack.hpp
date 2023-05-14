/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:25:23 by ntan              #+#    #+#             */
/*   Updated: 2022/10/26 15:40:55 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack() {};
		virtual  ~MutantStack() {};
		// MutantStack(const MutantStack<T>& src) : std::stack<T>(src) {};

		// MutantStack<T>	&operator=(const MutantStack<T>& src)
		// {
		// 	std::stack<T>::operator=(src);
		// 	return (*this);
		// };

		typedef typename std::stack<T>::container_type::iterator 				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator 		reverse_iterator;

		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		reverse_iterator rbegin()
		{
			return (this->c.rbegin());
		}
		reverse_iterator rend()
		{
			return (this->c.rend());
		}
		
		// void	print_mstack()
		// {
		// 	iterator	mbeg = begin();
		// 	iterator	mend = end();
		// 	size_t	i = 0;

		// 	while (mbeg != mend)
		// 	{
		// 		std::cout << "[" << i << "] = " << *mbeg << std::endl;
		// 		mbeg++;
		// 		i++;
		// 	}
		// }
};

#endif
