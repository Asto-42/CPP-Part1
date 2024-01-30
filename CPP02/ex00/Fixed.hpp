/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:55:40 by jquil             #+#    #+#             */
/*   Updated: 2024/01/24 14:13:37 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

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

class Fixed
{
	private:

	int x;
	static const int y = 8;

	public:

	Fixed();
	Fixed(const Fixed & y);
	Fixed & operator=( Fixed const & rhs);
	int getRawBits(void)const;
	void setRawBits(int const raw);
	~Fixed();
};

#endif
