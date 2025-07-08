/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:14:08 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/08 16:38:02 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap    firstRobot("firstRobot");
	ClapTrap	secondRobot("secondRobot");

	firstRobot.attack("secondRobot");
    secondRobot.takeDamage(5);
	// std::cout << secondRobot.getEnergyPoints() << std::endl;
	std::cout << secondRobot.getHitPoints() << std::endl;


    secondRobot.beRepaired(3);
	secondRobot.attack("firstRobot");
	firstRobot.takeDamage(10);
	firstRobot.beRepaired(10);
	return(0);
}
