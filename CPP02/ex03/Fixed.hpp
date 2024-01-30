/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:55:40 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 14:16:45 by jquil            ###   ########.fr       */
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
	Fixed & operator+(Fixed const & rhs);
	float operator-(Fixed rhs)const;
	float operator*(Fixed fixed) const;
	float operator/(Fixed rhs) const;

	bool operator>(Fixed const & rhs);
	bool operator<(Fixed const & rhs);
	bool operator>=(Fixed const & rhs);
	bool operator<=(Fixed const & rhs);
	bool operator==(Fixed const & rhs);
	bool operator!=(Fixed const & rhs);

	Fixed & operator--(void);
	Fixed operator--(int);
	Fixed & operator++(void);
	Fixed operator++(int);

	static Fixed & max(Fixed &first, Fixed &second);
	static const Fixed & max(const Fixed &first, const Fixed &second);
	Fixed & min(Fixed &first, Fixed &second);


	int getRawBits(void)const;
	void setRawBits(int const raw);
	float toFloat(void)const;
	int toInt(void)const;

	~Fixed();
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif