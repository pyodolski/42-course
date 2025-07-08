/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:05:57 by jupyo             #+#    #+#             */
/*   Updated: 2025/07/08 17:06:42 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string const name);
        FragTrap(FragTrap const &copy);
        ~FragTrap(void);
    
        FragTrap    &operator=(FragTrap const &trap);

        void    attack(const std::string& target);
        void    highFivesGuys(void);
};

#endif
