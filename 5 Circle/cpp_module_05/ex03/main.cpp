/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <jupyo@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:56:36 by jupyo             #+#    #+#             */
/*   Updated: 2025/08/14 22:58:43 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    std::srand(std::time(NULL));

    try { Bureaucrat tooLow("TooLow", 1500); }
    catch (const std::exception &e) { std::cerr << e.what() << std::endl; }

    try { Bureaucrat tooHigh("TooHigh", -10); }
    catch (const std::exception &e) { std::cerr << e.what() << std::endl; }

    Bureaucrat up("Up", 2);
    try { up.incrementGrade(); }
    catch (const std::exception &e) { std::cerr << e.what() << std::endl; }
    try { up.incrementGrade(); }
    catch (const std::exception &e) { std::cerr << e.what() << std::endl; }

    Bureaucrat down("Down", 149);
    try { down.decrementGrade(); }
    catch (const std::exception &e) { std::cerr << e.what() << std::endl; }
    try { down.decrementGrade(); }
    catch (const std::exception &e) { std::cerr << e.what() << std::endl; }

    Bureaucrat shrubby("Shrubby", 130);
    ShrubberyCreationForm shrub("Hello");
    shrubby.signForm(shrub);
    shrubby.executeForm(shrub);

    Bureaucrat roboBoss("Robo", 45);
    RobotomyRequestForm robo("Hello");
    roboBoss.signForm(robo);
    roboBoss.executeForm(robo);
    roboBoss.executeForm(robo);
    roboBoss.executeForm(robo);

    Bureaucrat prez("President", 5);
    PresidentialPardonForm pardon("World");
    prez.signForm(pardon);
    prez.executeForm(pardon);

    Intern intern;
    AForm* made = intern.makeForm("RobotomyRequestForm", "World");
    if (made) {
        prez.signForm(*made);
        prez.executeForm(*made);
        delete made;
    }

    return 0;
}
