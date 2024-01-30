/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:58:49 by jquil             #+#    #+#             */
/*   Updated: 2024/01/24 16:58:50 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->x = 0;
};

Fixed::Fixed(const Fixed & y)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = y;
};

Fixed::Fixed(const int i)
{
	//std::cout << "Int constructor called" << std::endl;
	setRawBits(i << this->y);
};

Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(f * (1 << this->y)));
};

Fixed & Fixed::operator=( Fixed const & rhs)
{
	//std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void)const
{
	//std::cout << "getRawbits called" << std::endl;
	return(this->x);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawbits called" << std::endl;
	this->x = raw;
}

float Fixed::toFloat(void)const
{
	float f;

	f = (float)this->getRawBits() / (1 << this->y);
	return (f);
}

int Fixed::toInt(void)const
{
	return (this->getRawBits() >> this->y);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
	o <<rhs.toFloat();
	return(o);
}
