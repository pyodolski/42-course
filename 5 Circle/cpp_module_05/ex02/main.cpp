/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <jupyo@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:10:51 by jupyo             #+#    #+#             */
/*   Updated: 2025/08/14 21:26:11 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    std::srand(std::time(NULL));

    Bureaucrat shrubbyBoss("Shrubby", 130);
    ShrubberyCreationForm shrub("Hello");
    shrubbyBoss.signForm(shrub);
    shrubbyBoss.executeForm(shrub);

    Bureaucrat roboBoss("Robo", 45);
    RobotomyRequestForm robo("Hello");
    roboBoss.signForm(robo);
    roboBoss.executeForm(robo);

    Bureaucrat prezBoss("President", 5);
    PresidentialPardonForm pardon("Hello");
    prezBoss.signForm(pardon);
    prezBoss.executeForm(pardon);

    return 0;
}
