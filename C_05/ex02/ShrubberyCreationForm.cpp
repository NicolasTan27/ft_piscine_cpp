/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:08:37 by ntan              #+#    #+#             */
/*   Updated: 2022/08/20 16:53:26 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Default ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137)
{
	std::cout << "Standard ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "Default ShrubberyCreationForm Destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : Form(cpy.getName(), cpy.getSignGrade(), cpy.getExecGrade())
{
	std::cout << "Copy ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cpy)
{
	std::cout << "Copy Assignment ShrubberyCreationForm Constructor" << std::endl;
	if (this == &cpy)
		return (*this);
	else
		return ( *( new(this) ShrubberyCreationForm(cpy) ) );
}

////////////////////////////////////////////////////////////////////

void			ShrubberyCreationForm::beExecuted() const
{
	std::string const	file(this->getTarget());
	std::ofstream			flux(file.c_str());

	if (flux)
	{
		flux << "          &&& &&  & &&" 			<< std::endl;
		flux << "      && &/&|& ()|/ @, &&"			<< std::endl;
		flux << "      &/(/&/&||/& /_/)_&/_&" 		<< std::endl;
		flux << "   &() &/&|()|/&/ '% & () &&" 		<< std::endl;
		flux << "  &__&&_ |& |&&/&__%_/_& && &&" 	<< std::endl;
		flux << " &&   && & &| &| /& & % ()& /&&" 	<< std::endl;
		flux << " ()&_---()&&|&&-&&--%---()~"		<< std::endl;
		flux << "     &&      |||" 					<< std::endl;
		flux << "             |||" 					<< std::endl;
		flux << "             |||" 					<< std::endl;
		flux << "             |||" 					<< std::endl;
		flux << "       , -=-~  .-^- _" 			<< std::endl;
		flux << std::endl;
		flux << "          &&& &&  & &&" 			<< std::endl;
		flux << "      && &/&|& ()|/ @, &&"			<< std::endl;
		flux << "      &/(/&/&||/& /_/)_&/_&" 		<< std::endl;
		flux << "   &() &/&|()|/&/ '% & () &&" 		<< std::endl;
		flux << "  &__&&_ |& |&&/&__%_/_& && &&" 	<< std::endl;
		flux << " &&   && & &| &| /& & % ()& /&&" 	<< std::endl;
		flux << " ()&_---()&&|&&-&&--%---()~"		<< std::endl;
		flux << "     &&      |||" 					<< std::endl;
		flux << "             |||" 					<< std::endl;
		flux << "             |||" 					<< std::endl;
		flux << "             |||" 					<< std::endl;
		flux << "       , -=-~  .-^- _" 			<< std::endl;
	}
	else
	{
		std::cout << "ERROR : Cannot open file" << std::endl; 
	}

}
		