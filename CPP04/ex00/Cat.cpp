/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:35:06 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 18:24:12 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "\033[34mDefault Cat constructor called for "<< this->type <<  "\033[0m" << std::endl;
};

void Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUUU" << std::endl;
}

Cat::Cat(Cat & ref):Animal(ref)
{
	this->type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[34mDefault Cat destructor called for "<< this->type <<  "\033[0m" << std::endl;
};

std::string Cat::getType( void ) const
{
	return (this->type);
}
