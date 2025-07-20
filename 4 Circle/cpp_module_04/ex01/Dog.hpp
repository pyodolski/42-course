/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:24:49 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/20 16:40:39 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
		
	public:
		Dog(void);
		Dog(Dog const &src);	
		virtual ~Dog(void);
		
		Dog &operator=(Dog const &src);

		void makeSound(void) const;

		Brain *getBrain(void) const;
};

#endif
