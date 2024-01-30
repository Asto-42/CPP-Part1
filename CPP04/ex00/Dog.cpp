/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:59 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 18:23:55 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "\033[34mDefault Dog constructor called for "<< this->type <<  "\033[0m" << std::endl;
};

void Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}

Dog::Dog(Dog & ref):Animal(ref)
{
	this->type = ref.getType();
	std::cout << "\033[34mCopy constructor called for "<< this->type <<  "\033[0m" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\033[34mDefault Dog destructor called for "<< this->type <<  "\033[0m" << std::endl;
};

std::string Dog::getType( void ) const
{
	return (this->type);
}
