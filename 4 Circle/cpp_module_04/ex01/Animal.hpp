/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:23:56 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/20 16:37:00 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);
		
		Animal &operator=(Animal const &src);

		std::string getType(void) const;
		void setType(std::string const type);
	
		virtual void makeSound(void) const;
};

#endif
