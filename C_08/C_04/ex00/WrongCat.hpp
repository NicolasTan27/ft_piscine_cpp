/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:07:16 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 15:57:43 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat&);
		WrongCat &operator=(const WrongCat&);

		void makeSound() const;
};

#endif