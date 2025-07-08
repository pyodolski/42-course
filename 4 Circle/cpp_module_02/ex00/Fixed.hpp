/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:11:45 by jupyo             #+#    #+#             */
/*   Updated: 2025/05/09 20:16:57 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
			
	public:
		Fixed();
		Fixed(Fixed &copy);
		~Fixed();

		Fixed &operator=(Fixed const &copy);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
