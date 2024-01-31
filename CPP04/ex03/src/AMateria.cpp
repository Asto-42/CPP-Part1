/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:09 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 15:44:39 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"


AMateria::AMateria()
{
	std::cout << "\033[34mDefault AMateria constructor called\033[0m" << std::endl;
	this->name = "No name";
};

AMateria::AMateria(std::string const & type)
{
	std::cout << "\033[34mSpecific name AMateria constructor called\033[0m" << std::endl;
	this->name = type;
};

std::string const & AMateria::getType( void ) const
{
	return (this->name);
}

void AMateria::use(ICharacter & target)
{
	std::cout << ICharacter->name << "try to do something at " << target << "without any Materias" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "\033[34mDefault AMateria destructor called\033[0m" << std::endl;
};


//			ICE PART
Ice::Ice()
{
	std::cout << "\033[34mDefault Ice constructor called\033[0m" << std::endl;
	this->type = "ice";
	this->damage = 0;
}

Ice::Ice(int amount)
{
	std::cout << "\033[34mSpecific Ice dps constructor called\033[0m" << std::endl;
	this->type = "ice";
	this->damage = amount;
}

Ice::~Ice()
{
	std::cout << "\033[34mDefault Ice destructor called\033[0m" << std::endl;
}

//			CURE PART
Cure::Cure()
{
	std::cout << "\033[34mDefault Cure constructor called\033[0m" << std::endl;
	this->type = "cure";
	this->amount = 0;
}

Cure::Cure(int amount)
{
	std::cout << "\033[34mSpecific Cure dps constructor called\033[0m" << std::endl;
	this->type = "cure";
	this->amount = amount;
}

Cure::~Cure()
{
	std::cout << "\033[34mDefault Cure destructor called\033[0m" << std::endl;
}
