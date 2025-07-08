/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:15:25 by jupyo             #+#    #+#             */
/*   Updated: 2025/05/12 17:20:06 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a,b) << std::endl;

    return 0;
}
