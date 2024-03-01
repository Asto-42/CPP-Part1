/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:59 by jquil             #+#    #+#             */
/*   Updated: 2024/02/29 13:01:51 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "\033[34mDefault Dog constructor called\033[0m" << std::endl;
};

Dog::Dog(Dog & ref):Animal(ref)
{
	this->type = ref.getType();
	this->brain = new Brain(*ref.brain);
	std::cout << "\033[34mCopy Dog constructor called\033[0m" << std::endl;
};

Dog & Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		delete(this->brain);
		this->brain = new Brain(*rhs.brain);
	}
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
	delete(brain);
	std::cout << "\033[34mDog's brain destructed\033[0m" << std::endl;
};
