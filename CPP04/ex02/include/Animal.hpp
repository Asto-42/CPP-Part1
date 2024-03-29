/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:22 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:45:58 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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

	virtual void makeSound() const = 0;
	virtual std::string getType(void) const = 0;
};

#include "../include/Brain.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

#endif
