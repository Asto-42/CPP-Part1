/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:07:57 by jquil             #+#    #+#             */
/*   Updated: 2024/03/01 14:13:30 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "\033[34mDefault Cure constructor called\033[0m" << std::endl;
};

Ice::~Ice()
{
	std::cout << "\033[34mDefault Ice destructor called\033[0m" << std::endl;
}

Ice* Ice::clone() const
{
	std::cout << "Copy of Ice create and return" << std::endl;
	Ice *copyMateria = new Ice;
	return (copyMateria);
}

void Ice::use(ICharacter & target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}
