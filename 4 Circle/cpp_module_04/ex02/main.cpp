/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:16:23 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/20 17:46:56 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();

    delete j;
    delete i;

	std::cout << std::endl;

	Animal  *animals[6] =
    {
        new Dog(), new Dog(), new Dog(),
        new Cat(), new Cat(), new Cat()
    };

    for (int i = 0; i < 6; i++)
    {
        std::cout << std::endl << "Destroy Animal " << i + 1 << std::endl;
        delete animals[i];
    }

	// Animal test;



	return 0;
}
