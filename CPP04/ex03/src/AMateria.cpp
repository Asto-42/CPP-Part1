/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:09 by jquil             #+#    #+#             */
/*   Updated: 2024/02/14 18:05:37 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

////////			AMATERIA PART
////
//
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

////////			ICE PART
////
//
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

////////			CURE PART
////
//
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

void Cure::use(ICharacter & target)
{
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}

////////			SOURCE PART
////
//
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
		if (this->inventory[x]->getType() == type)
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
