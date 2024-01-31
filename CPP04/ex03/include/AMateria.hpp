/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:22 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 16:12:55 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ios>
#include <algorithm>
#include <vector>
#include <math.h>

class AMateria
{
	protected :
	std::string name;

	public :

	AMateria();
	AMateria(std::string const & type);
	~AMateria();

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);
};

class Ice:public AMateria
{
	private :
	std::string type;
	int	damage;

	public :

	Ice();
	Ice::Ice(int amount);
	~Ice();
};

class Cure:public AMateria
{
	private :
	std::string type;
	int amount;

	public :

	Cure();
	Cure(int amount);
	~Cure();
};

class ICharacter
{
	private :

	std::string name;

	public :

	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class IMateriaSource
{
	public:

	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

// #include "../include/Brain.hpp"

#endif
