/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:07:16 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 15:57:43 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
	public :
		Cat();
		virtual ~Cat();
		Cat(const Cat&);
		Cat &operator=(const Cat&);

		virtual void makeSound() const;
};

#endif