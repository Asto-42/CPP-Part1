/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:09 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 12:21:31 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"


Animal::Animal()
{
	std::cout << "\033[34mDefault Animal constructor called\033[0m" << std::endl;
	this->type = "animal";
};

Animal::~Animal()
{
	std::cout << "\033[34mDefault Animal destructor called\033[0m" << std::endl;
};

Animal::Animal(Animal & ref)
{
	this->type = ref.type;
	std::cout << "\033[34mCopy Animal constructor called for\033[0m" << std::endl;
};

Animal & Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "... generic animal sound ...\n";
}

std::string Animal::getType( void ) const
{
	return (this->type);
}
