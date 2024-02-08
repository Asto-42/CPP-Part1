/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:22 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 11:53:25 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

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

#include "Character.hpp"

class ICharacter;
class AMateria;

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource:public IMateriaSource
{
	private :


	public:

	AMateria *inventory[4];
	MateriaSource();
	MateriaSource(MateriaSource const & ref);
	MateriaSource & operator=(MateriaSource const & ref);


	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* src);
	virtual AMateria* createMateria(std::string const & type);
};

class AMateria
{
	protected :
	std::string name;

	public :

	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);
};

class Ice:public AMateria
{
	private :

	public :

	Ice();
	~Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter & target);
};

class Cure:public AMateria
{
	private :
	std::string type;

	public :

	Cure();
	~Cure();
	//std::string const & getType();
	virtual Cure* clone() const;
	virtual void use(ICharacter & target);
};


#endif
