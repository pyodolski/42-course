/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:17:30 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/15 15:17:45 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) 
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) 
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->type = src.getType();
	return (*this);
}

std::string WrongAnimal::getType(void) const {return (this->type);}
void WrongAnimal::setType(std::string const type) {this->type = type;}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal" << std::endl;
}
