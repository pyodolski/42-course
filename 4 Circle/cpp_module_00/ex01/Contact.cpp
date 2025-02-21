/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:12:42 by jupyo             #+#    #+#             */
/*   Updated: 2025/02/21 20:12:44 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(std::string firstName, std::string lastName, \
	std::string nickname, std::string phone, std::string secret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_phone = phone;
	this->_secret = secret;
}

void Contact::displayContact(void)
{

	std::cout << CLEAR;
	std::cout << "**********************************" << std::endl;
	std::cout << "*          CONTACT VIEWER        *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl << std::endl;
}

std::string	Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string	Contact::formatWidth(std::string field)
{
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (field);
}
