/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:24:57 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/20 17:39:41 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animals[6] = 
	{
		new Dog(), new Dog(), new Dog(),
		new Cat(), new Cat(), new Cat()
	};
	
	for (int i = 0; i < 6; i++)
    {
        std::cout << std::endl << "Destroy Animal " << i + 1 << std::endl;
        delete animals[i];
    }

    std::cout << std::endl;
	Dog basic;
        {
            Dog tmp = basic;
            std::cout << std::endl << "tmp's Brain Adress  : " << tmp.getBrain() << std::endl;
        }
        std::cout << std::endl << "Basic's Brain Adress: " << basic.getBrain() << std::endl;

	Cat *original = new Cat();
    Cat *copy = new Cat(*original);

    std::cout << std::endl << "Original's Brain Adress: " << original->getBrain() << std::endl;
    original->getBrain()->showIdeas();
    delete original;
    
    std::cout << std::endl << "Copy's Brain Adress: " << copy->getBrain() << std::endl;
    copy->getBrain()->showIdeas();
    delete copy;

	return 0;
//	WrongAnimal *wronganimal = new WrongCat();
//	delete wronganimal;

}
