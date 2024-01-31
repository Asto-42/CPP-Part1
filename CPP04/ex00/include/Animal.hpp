/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:22 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 13:55:01 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

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

class Animal
{
	protected:

	std::string type;

	public:

	Animal();
	Animal(Animal & ref);
	virtual ~Animal();

	Animal & operator=(Animal const & rhs);

	virtual void makeSound() const;
	virtual std::string getType(void) const;
};

class WrongAnimal
{
	protected :

	std::string type;

	public :

	WrongAnimal();
	WrongAnimal(WrongAnimal & ref);
	~WrongAnimal();

	WrongAnimal & operator=(WrongAnimal const & rhs);

	void makeSound() const;
	std::string getType(void) const;
};


#endif
