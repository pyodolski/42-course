/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:23:46 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/20 16:36:54 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal(void) 
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &src) 
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void) 
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->type = src.getType();
	return (*this);
}

std::string Animal::getType(void) const {return (this->type);}
void Animal::setType(std::string const type) {this->type = type;}

void Animal::makeSound(void) const
{
	std::cout << "Animal" << std::endl;
}
