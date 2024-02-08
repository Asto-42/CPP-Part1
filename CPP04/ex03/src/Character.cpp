/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:32:04 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 15:48:17 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

Character::Character()
{
	this->name = "no name";
	for (int x = 0; x < 4; x++)
		this->inventory[x] = 0;
}

Character::Character(std::string name)
{
	this->name = name;
	for (int x = 0; x < 4; x++)
		this->inventory[x] = 0;
}

Character & Character::operator=(Character const & ref)
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

const std::string &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int x = 0; x < 4; x++)
	{
		if (this->inventory[x] == 0)
		{
			this->inventory[x] = m;
			std::cout << "Materia " << m->getType() << " equip in " << x + 1 << " inventory slot" << std::endl;
			return ;
		}
	}
	std::cout << "Can't equip more materia, inventory is full" << std::endl;
	delete (m);
}
void Character::unequip(int idx)
{
	if (idx <= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	idx = idx - 1;
	if (idx >= 0 && idx <= 3)
		this->inventory[idx]->use(target);
}

Character::~Character()
{
	for (int x = 0; x < 4; x++ )
		if (this->inventory[x])
			delete(this->inventory[x]);
}
