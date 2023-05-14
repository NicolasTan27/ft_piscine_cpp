/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:31:31 by ntan              #+#    #+#             */
/*   Updated: 2022/07/29 22:22:12 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
# define BRAIN_CPP

# include <string>
# include <iostream>

class Brain
{
	public :
		Brain();
		~Brain();
		Brain(const Brain&);
		Brain &operator=(const Brain&);

		void			showIdeas(void) const;
		void			addIdea(std::string idea);

		std::string 	*getIdeas() const;
		int				getIdeasCount() const;
		
	private :
		std::string		*ideas;
		int				ideasCount;
};

#endif