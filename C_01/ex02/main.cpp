/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan <ntan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:42:08 by ntan              #+#    #+#             */
/*   Updated: 2022/06/17 17:58:37 by ntan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of str       : " << &str << std::endl;
	std::cout << "Address of stringPTR : " << stringPTR << std::endl;
	std::cout << "Address of stringREF : " << &stringREF << std::endl;

	std::cout << "Value of str         : " << str << std::endl;
	std::cout << "Value of stringPTR   : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF   : " << stringREF << std::endl;

	return (0);
}