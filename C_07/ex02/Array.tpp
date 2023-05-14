/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:44:33 by ntan              #+#    #+#             */
/*   Updated: 2022/08/25 15:06:28 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), elements(NULL)
{
	std::cout << "Array Default Constructor" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size), elements(new T[size])
{
	std::cout << "Array Standard Constructor" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->elements;
	std::cout << "Array Default Destructor" << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T>& src)
{
	std::cout << "Array Copy Constructor" << std::endl;
	this->elements = NULL;
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T>& src)
{
	if (this != &src)
	{
		if (this->elements != NULL)
			delete [] this->elements;
		this->_size = src.size();
		this->elements = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++)
		{
			this->elements[i] = src.elements[i];
		}
	}
	
	std::cout << "Array Copy Assignment Constructor" << std::endl;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index) const 
{
    if (index >= this->_size) 
	{
        std::cerr << "ERROR : Index " << index << " out of range" << std::endl;
		throw(std::exception());
    }
    return (this->elements[index]);
}

template <typename T>
unsigned int Array<T>::size() const 
{
    return (this->_size);
}