/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:13:07 by jupyo             #+#    #+#             */
/*   Updated: 2025/02/21 20:13:09 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_id = 0;
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::add(void)
{
	std::string firstName, lastName, nickname, phone, secret;
	int			current_id;

	std::cout << CLEAR;
	std::cout << "**********************************" << std::endl;
	std::cout << "*         ADD NEW CONTACT        *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;
	std::cout << "Type the contact informations:" << std::endl << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phone);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, secret);
	
	if (firstName.length() < 1
		|| lastName.length() < 1
		|| nickname.length() < 1
		|| phone.length() < 1
		|| secret.length() < 1)
	{
		std::cout << std::endl << "Contact not added. A contact can't have any empty field." << std::endl;
		std::cout << "Press ENTER to continue." << std::endl;
		std::cin.ignore();
		return ;
	}
	this->_contacts[this->_id++ % 8] = Contact(firstName, lastName, nickname, phone, secret);
	std::cout << std::endl;
	current_id = this->_id % 8 == 0 ? 8 : this->_id % 8;
	if (this->_id > 8)
		std::cout << "Contact added at memory position " << current_id << " (oldest contact overwritten)." << std::endl;
	else
		std::cout << "Contact added at memory position " << current_id << std::endl;
	std::cout << "Press ENTER to continue." << std::endl;
	std::cin.ignore();
}

void	PhoneBook::_printTable(void)
{
	std::string field;

	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].getFirstName().length() > 0)
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			field = this->_contacts[i].getFirstName();
			std::cout << std::setw(10) << Contact::formatWidth(field) << "|";
			field = this->_contacts[i].getLastName();
			std::cout << std::setw(10) << Contact::formatWidth(field) << "|";
			field = this->_contacts[i].getNickname();
			std::cout << std::setw(10) << Contact::formatWidth(field) << "|" << std::endl;
		}
	}
	std::cout << std::endl;
}

void	PhoneBook::search(void)
{
	std::string input;
	int 		index;
	int 		maxIndex = this->_id > 7 ? 8 : this->_id;

	std::cout << CLEAR;
	std::cout << "**********************************" << std::endl;
	std::cout << "*         SEARCH CONTACTS        *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;
	
	if (this->_id == 0)
	{
		std::cout << "No contacts added yet." << std::endl;
		std::cout << "Press ENTER to back." << std::endl;
		std::cin.ignore();
		return ;
	}
	this->_printTable();
	std::cout << "Avaliabe commands:" << std::endl;
	std::cout << "- [index number]" << std::endl;
	std::cout << "- BACK" << std::endl << std::endl;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		index = std::atoi(input.c_str());
		if (input == "BACK")
			break ;
		else if (index < 1 || index > maxIndex)
		{
			std::cout << "Invalid command. Please try again or type BACK to return." << std::endl;
			continue ;
		}
		else
		{
			this->_contacts[index - 1].displayContact();
			std::cout << "Press ENTER to continue." << std::endl;
			std::cin.ignore();
			break ;
		}
	}
}
