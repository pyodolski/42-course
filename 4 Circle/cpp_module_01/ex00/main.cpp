/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:20:53 by jupyo             #+#    #+#             */
/*   Updated: 2025/03/09 13:33:22 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	mainHeader(void)
{
	std::cout << "\033c";
	std::cout << "**********************************" << std::endl;
	std::cout << "*           C++ ZOMBIES          *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;
}

int	main(void)
{
	std::string chumpName;
	std::string zombieName;
	Zombie *zombie;

	mainHeader(); 
	std::cout << "Enter a name to the chump: " << std::endl;
	std::cin >> chumpName;
	std::cout << "Enter a name to the zombie: " << std::endl;
	std::cin >> zombieName;
	
	mainHeader();

	zombie = newZombie(zombieName);
	zombie->announce();
	
	randomChump(chumpName);

	delete zombie;
}
