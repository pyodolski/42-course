/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:09:09 by jupyo             #+#    #+#             */
/*   Updated: 2025/03/09 14:10:10 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string text = "HI THIS IS BRAIN";
	std::string *stringPTR = &text;
	std::string &stringREF = text;

	std::cout << "Address of text     : " << &text << std::endl;
	std::cout << "Address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "text content     : " << text << std::endl;
	std::cout << "StringPTR content: " << *stringPTR << std::endl;
	std::cout << "StringREF content: " << stringREF << std::endl;
}
