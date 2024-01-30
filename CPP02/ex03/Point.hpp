/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:27:40 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 14:01:32 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

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
#include "Fixed.hpp"

class Point
{
	private:

	const Fixed x;
	const Fixed y;

	public:

	Point();
	Point(const float x, const float y);
	Point(const Point& copy);
	~Point(void);

	//Getter
	const Fixed & getX(void)const;
	const Fixed & getY(void)const;

	Point &operator=(const Point &src);
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
