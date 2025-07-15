/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:03:18 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/15 14:10:37 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// 생성자

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

// 연산자 

Animal &Animal::operator=(Animal const &src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->type = src.getType();
	return (*this);
}

// Getter Setter

std::string Animal::getType(void) const {return (this->type);}
void Animal::setType(std::string const type) {this->type = type;}

void Animal::makeSound(void) const
{
	std::cout << "Animal" << std::endl;
}
