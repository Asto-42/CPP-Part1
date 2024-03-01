/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:09:12 by jquil             #+#    #+#             */
/*   Updated: 2024/03/01 14:13:34 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia source was created\n";
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const & ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (ref.inventory[i])
			this->inventory[i] = (ref.inventory[i])->clone();
	}
	std::cout << "Materia source was created from copy\n";
}

MateriaSource & MateriaSource::operator=(MateriaSource const & ref)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (ref.inventory[i])
			this->inventory[i] = (ref.inventory[i])->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* src)
{
	for (int x = 0 ; x < 4; x++)
	{
		if (this->inventory[x] == 0)
		{
			this->inventory[x] = src;
			std::cout << "Materia " << src->getType() << " learned" << std::endl;
			return ;
		}
	}
	std::cout << "Can't learn new Materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int x = 0; x < 4 ; x++)
	{
		if (this->inventory[x] && this->inventory[x]->getType() == type)
		{
			std::cout << "Materia " << type << " created" << std::endl;
			return (this->inventory[x]->clone());
		}
	}
	std::cout << type << " materia does not exist" << std::endl;
	return (0);
}
MateriaSource::~MateriaSource()
{
	for (int x = 0; x < 4; x++ )
		if (this->inventory[x])
			delete(this->inventory[x]);
}
