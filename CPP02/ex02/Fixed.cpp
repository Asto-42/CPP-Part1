/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:58:49 by jquil             #+#    #+#             */
/*   Updated: 2024/01/24 18:20:46 by jquil            ###   ########.fr       */
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
Fixed & Fixed::operator+(Fixed const & rhs)
{
	//std::cout << " + operator called" << std::endl;
	setRawBits(this->getRawBits() + rhs.getRawBits());
	return (*this);
}

Fixed & Fixed::operator-(Fixed const & rhs)
{
	//std::cout << " - operator called" << std::endl;
	setRawBits(this->getRawBits() - rhs.getRawBits());
	return (*this);
}

Fixed & Fixed::operator*(Fixed const & rhs)
{
	// std::cout << " * operator called" << std::endl;

	//S3

	Fixed temp;
	temp.x = (rhs.x/rhs.y) / 2 * (this->x / this->y) / 2;
	//temp.y = this->x * this->y;
	setRawBits(temp.x);

	// S1
	//Fixed x = this->getRawBits();
	//Fixed y = rhs.getRawBits();
	// std::cout << x.x << " | " <<  x.y << std::endl;
	// std::cout << y.x << " | " << y.y << std::endl;
	// std::cout << "(x.x / x.y) = " << (x.x / y.x) << "\n(y.x  y.y) = " << (y.y / x.y) << std::endl;
	// this->setRawBits((x.x * y.x) + (y.y * x.y));

	// S2
	// float x = this->getRawBits();
	// float y = rhs.getRawBits();
	// std::cout << "x = " << x << " | y = " << y << std::endl;
	// std::cout << "x / y = " << (x / y) << std::endl;
	// std::cout << "x / y * 2 = " << (x / y) * 2 << std::endl;
	// this->setRawBits((x / y) * 2);

	// std::cout << "rhs =" << (rhs.getRawBits()) << std::endl;
	// std::cout << "this = " << (this->getRawBits()) << std::endl;
	// setRawBits((rhs.getRawBits() << rhs.getRawBits()) * (this->getRawBits() << this->getRawBits()));
	return (*this);
}

Fixed & Fixed::operator/(Fixed const & rhs)
{
	// std::cout << " / operator called" << std::endl;
	if (rhs.getRawBits() == 0)
	{
		std::cout << "Error, ?/0" << std::endl;
		return (*this);
	}
	setRawBits(rhs.getRawBits() / rhs.getRawBits());
	return (*this);
}

bool Fixed::operator>(Fixed const & rhs)
{
	//std::cout << " > operator called" << std::endl;
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator<(Fixed const & rhs)
{
	std::cout << " < operator called" << std::endl;
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator>=(Fixed const & rhs)
{
	//std::cout << " >= operator called" << std::endl;
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator<=(Fixed const & rhs)
{
	//std::cout << " <= operator called" << std::endl;
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator==(Fixed const & rhs)
{
	//std::cout << " == operator called" << std::endl;
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator!=(Fixed const & rhs)
{
	//std::cout << " != operator called" << std::endl;
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	return (0);
}

//prefix operator
Fixed & Fixed::operator--(void)
{
	Fixed y = *this;

	this->x = y.x-1;
	return *this;
}

Fixed & Fixed::operator++(void)
{
	Fixed y = *this;

	this->x = y.x+1;
	return *this;
}

//post operator
Fixed Fixed::operator--(int)
{
	x = this->x;
	this->x = x - 1;
	return x;
}

Fixed Fixed::operator++(int)
{
	x = this->x;
	this->x = x + 1;
	return x;
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
