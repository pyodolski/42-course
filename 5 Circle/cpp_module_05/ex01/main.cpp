/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <jupyo@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:55:32 by jupyo             #+#    #+#             */
/*   Updated: 2025/08/14 20:36:36 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    try {
    	Bureaucrat tooLow("TooLow", 1500); 
	} catch (const std::exception &e) {
    	std::cerr << e.what() << std::endl;
	}

	try {
    	Bureaucrat tooHigh("TooHigh", -10); 
	} catch (const std::exception &e) {
    	std::cerr << e.what() << std::endl;
	}
	
	Bureaucrat bob("Bob", 2);
    std::cout << bob << std::endl;
    try {
        bob.incrementGrade();
        std::cout << bob << std::endl;
        bob.incrementGrade();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    Bureaucrat tim("Tim", 149);
    std::cout << tim << std::endl;
    try {
        tim.decrementGrade();
        std::cout << tim << std::endl;
        tim.decrementGrade();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    Form idForm("ID_FORM", 100, 90);
    Bureaucrat low("lowGuy", 150);
    Bureaucrat signer("Signer", 100);
    std::cout << idForm << std::endl;
    low.signForm(idForm);
    std::cout << idForm << std::endl;
    signer.signForm(idForm);
    std::cout << idForm << std::endl;

    return 0;
}
