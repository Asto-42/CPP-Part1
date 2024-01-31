/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:29:11 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 12:31:36 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "\033[34mDefault WrongAnimal constructor called\033[0m" << std::endl;
	this->type = "animal";
};

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[34mDefault Animal destructor called\033[0m" << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal & ref)
{
	this->type = ref.type;
	std::cout << "\033[34mCopy Animal constructor called for\033[0m" << std::endl;
};

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "... generic wrong animal sound ...\n";
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}
