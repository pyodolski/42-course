/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:24:04 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/20 16:39:41 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;

	std::string const	needs[] =
	{
		"I need to eat",
		"I need to sleep",
		"I need to play",
		"I need to poop",
		"I need to pee",
	};
	for (int i = 0; i < 100; i++)
		this->ideas[i] = needs[rand() % 5];
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &src)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}

void	Brain::showIdeas(void) const
{
	for (int i = 0; i < 5; i++)
		std::cout << "idea #" << i + 1 << ": " << this->ideas[i] << std::endl;
}
