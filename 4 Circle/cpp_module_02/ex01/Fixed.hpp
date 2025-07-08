/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:43:06 by jupyo             #+#    #+#             */
/*   Updated: 2025/05/09 21:45:38 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
			
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();
		
		Fixed &operator=(Fixed const &copy);
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &copy);

#endif
