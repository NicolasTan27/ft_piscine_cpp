/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:07:16 by ntan              #+#    #+#             */
/*   Updated: 2022/07/29 15:24:56 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat&);
		virtual ~Cat();
		Cat &operator=(const Cat&);

		virtual void makeSound() const;
		void		newIdea(std::string idea);
		void		showBrain(void);

	private :
		Brain *brain;
};

#endif