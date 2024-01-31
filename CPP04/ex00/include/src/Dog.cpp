/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:59 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 12:21:26 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "\033[34mDefault Dog constructor called\033[0m" << std::endl;
};

Dog::Dog(Dog & ref):Animal(ref)
{
	this->type = ref.getType();
	std::cout << "\033[34mCopy Dog constructor called\033[0m" << std::endl;
};

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}

std::string Dog::getType( void ) const
{
	return (this->type);
}

Dog::~Dog()
{
	std::cout << "\033[34mDefault Dog destructor called\033[0m" << std::endl;
};
