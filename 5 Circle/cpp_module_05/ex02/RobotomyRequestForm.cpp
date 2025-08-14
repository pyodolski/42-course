/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <jupyo@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:04:48 by jupyo             #+#    #+#             */
/*   Updated: 2025/08/14 21:12:44 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <string>
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default target") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	_target = other._target;
	setIsSigned(other.getIsSigned());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}


void RobotomyRequestForm::performAction() const
{
	int random_number;

	random_number = rand() % 2;

	if (random_number == 1)
		std::cout << "B..B..B..B " << getName() << " has been robotomized successfully!" << std::endl; 		
	else
		throw RobotizationFailed();
}

const char *RobotomyRequestForm::RobotizationFailed::what() const throw()
{
	return ("Unfortunately robotomy failed.");
}
