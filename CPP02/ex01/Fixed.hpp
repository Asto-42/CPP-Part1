/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:55:40 by jquil             #+#    #+#             */
/*   Updated: 2024/02/13 13:25:08 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ios>
#include <algorithm>
#include <vector>
#include <math.h>

class Fixed
{
	private:

	int x;
	static const int y = 8;

	public:

	Fixed();
	Fixed(const Fixed & y);
	Fixed(const int);
	Fixed(const float);
	Fixed & operator=( Fixed const & rhs);


	int getRawBits(void)const;
	void setRawBits(int const raw);
	float toFloat(void)const;
	int toInt(void)const;

	~Fixed();
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
