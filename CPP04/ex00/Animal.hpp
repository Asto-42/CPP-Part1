/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:22 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 18:20:14 by jquil            ###   ########.fr       */
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
	~Animal();

	Animal & operator=(Animal const & rhs);

	void makeSound() const;

	std::string getType(void) const;
};


#endif
