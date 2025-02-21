/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:12:50 by jupyo             #+#    #+#             */
/*   Updated: 2025/02/21 20:12:51 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdio>
# include <iomanip>
# include <cstdlib>

# define CLEAR "\033c"
# define NO 0
# define YES 1

class	Contact
{
	public:
	
		Contact(void);
		~Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret);
		void				displayContact(void);
		std::string			getFirstName(void);
		std::string			getLastName(void);
		std::string			getNickname(void);
		static std::string	formatWidth(std::string field);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};

#endif
