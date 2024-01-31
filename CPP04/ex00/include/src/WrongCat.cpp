/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:31:44 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 12:34:24 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "\033[34mDefault Cat constructor called\033[0m" << std::endl;
};

void WrongCat::makeSound() const
{
	std::cout << "WRONG MIAOUUUUUUUU" << std::endl;
}

WrongCat::WrongCat(WrongCat & ref):WrongAnimal(ref)
{
	this->type = ref.getType();
	std::cout << "\033[34mCopy Cat constructor called\033[0m" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\033[34mDefault Cat destructor called\033[0m" << std::endl;
};

std::string WrongCat::getType( void ) const
{
	return (this->type);
}
