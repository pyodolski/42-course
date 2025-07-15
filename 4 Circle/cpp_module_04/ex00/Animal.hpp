/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:10:49 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/15 14:13:10 by jupyo            ###   ########.fr       */
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
		// 생성자 
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);
		
		Animal &operator=(Animal const &src);

		// Getter and Setter
		std::string getType(void) const;
		void setType(std::string const type);
	
		virtual void makeSound(void) const;
};

#endif
