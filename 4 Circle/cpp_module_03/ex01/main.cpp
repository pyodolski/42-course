/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:14:08 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/08 17:14:28 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap    firstRobot("firstRobot");
	ScavTrap	secondRobot("secondRobot");

	firstRobot.attack("secondRobot");
    secondRobot.takeDamage(5);
	// std::cout << secondRobot.getEnergyPoints() << std::endl;
	// std::cout << secondRobot.getHitPoints() << std::endl;

    secondRobot.beRepaired(3);
	secondRobot.guardGate();
	secondRobot.attack("firstRobot");
	firstRobot.takeDamage(100);
	firstRobot.beRepaired(10);
	return(0);
}
