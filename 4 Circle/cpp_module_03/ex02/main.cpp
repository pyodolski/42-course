/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:14:08 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/08 17:13:23 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap    firstRobot("firstRobot");
	FragTrap	secondRobot("secondRobot");

	firstRobot.attack("secondRobot");
    secondRobot.takeDamage(5);
	// std::cout << secondRobot.getEnergyPoints() << std::endl;
	// std::cout << secondRobot.getHitPoints() << std::endl;

    secondRobot.beRepaired(3);
	secondRobot.highFivesGuys();
	secondRobot.attack("firstRobot");
	firstRobot.takeDamage(100);
	firstRobot.beRepaired(10);
	return(0);
}
