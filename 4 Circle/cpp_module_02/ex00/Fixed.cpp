/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:36:55 by jupyo             #+#    #+#             */
/*   Updated: 2025/05/12 16:39:02 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	this->_value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
