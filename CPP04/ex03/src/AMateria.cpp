/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:09 by jquil             #+#    #+#             */
/*   Updated: 2024/03/01 14:09:29 by jquil            ###   ########.fr       */
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


std::string const & AMateria::getType() const
{
	return (this->name);
}

void AMateria::use(ICharacter & target)
{
	std::cout << this->name << "try to do something at " << &target << "without any Materias" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "\033[34mDefault AMateria destructor called\033[0m" << std::endl;
};

void Cure::use(ICharacter & target)
{
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}
