/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:59:30 by ntan              #+#    #+#             */
/*   Updated: 2022/07/25 15:58:38 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal &operator=(const WrongAnimal&);

		void 			makeSound() const;
		std::string		getType() const;

	protected :
		std::string	type;
};

#endif