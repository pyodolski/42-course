/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:36:58 by jupyo             #+#    #+#             */
/*   Updated: 2025/03/09 14:36:59 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	pressEnter(void)
{
	std::cout << std::endl << "press ENTER to continue" << std::endl;
	std::cin.ignore();
	std::cout << "\033c";
}

void	mainHeader(void)
{
	std::cout << "\033c";
	std::cout << "**********************************" << std::endl;
	std::cout << "*            HARL 2.0            *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;
	std::cout << "We will pass by the program trought levels" << std::endl;
}

int	main(void)
{
	Harl harl;

	mainHeader();
	pressEnter();
	
	std::cout << "[ DEBUG ]" << std::endl << std::endl;
	harl.complain("DEBUG");
	pressEnter();

	std::cout << "[ INFO ]" << std::endl << std::endl;
	harl.complain("INFO");
	pressEnter();

	std::cout << "[ WARNING ]" << std::endl << std::endl;
	harl.complain("WARNING");
	pressEnter();

	std::cout << "[ ERROR ]" << std::endl << std::endl;
	harl.complain("ERROR");
	pressEnter();
}
