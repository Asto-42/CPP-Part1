/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:35:06 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 14:36:20 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "\033[34mDefault Cat constructor called\033[0m" << std::endl;
};

void Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUUU" << std::endl;
}

Cat::Cat(Cat & ref):Animal(ref)
{
	this->type = ref.getType();
	std::cout << "\033[34mCopy Cat constructor called\033[0m" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[34mDefault Cat destructor called\033[0m" << std::endl;
	delete(brain);
	std::cout << "\033[34mDog's brain destructed\033[0m" << std::endl;
};

std::string Cat::getType( void ) const
{
	return (this->type);
}
