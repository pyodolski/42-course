/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:08:03 by jupyo             #+#    #+#             */
/*   Updated: 2025/02/21 19:44:26 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>

void megaphone(char *s)
{
	while (*s)
		std::cout << (char)toupper(*(s++));
}

int main(int ac, char **av)
{
	if (ac > 1)
		while (*(++av))
			megaphone(*av);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
