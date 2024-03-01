/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:07:50 by jquil             #+#    #+#             */
/*   Updated: 2024/03/01 14:13:26 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "\033[34mDefault Cure constructor called\033[0m" << std::endl;
};

Cure::~Cure()
{
	std::cout << "\033[34mDefault Cure destructor called\033[0m" << std::endl;
}

Cure* Cure::clone() const
{
	std::cout << "Copy of Cure create and return" << std::endl;
	Cure *copyMateria = new Cure;
	return (copyMateria);
}
