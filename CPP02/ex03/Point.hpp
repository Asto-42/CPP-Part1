/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:27:40 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:30:30 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

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

	const Fixed & getX(void)const;
	const Fixed & getY(void)const;

	Point &operator=(const Point &src);
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
