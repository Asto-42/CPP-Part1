/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:27:55 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 14:00:41 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point(): x(0), y(0)
{
	//std::cout << "Default constructor called" << std::endl;
};

Point::Point(const float x, const float y): x(x), y(y)
{
	//std::cout << "Constructor called" << std::endl;
};

Point::Point(const Point &copy):x(copy.getX()), y(copy.getY())
{

};

const Fixed & Point::getX(void)const
{
	return (this->x);
}

const Fixed & Point::getY(void)const
{
	return (this->y);
}

Point & Point::operator=(const Point &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

Point::~Point(void)
{
	//std::cout << "Destructor called" << std::endl;
};
