/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:24:14 by jquil             #+#    #+#             */
/*   Updated: 2024/02/20 15:14:08 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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

class ClapTrap
{
	protected:

	std::string Name;
	unsigned int hit_points;
	unsigned int Energy_points;
	unsigned int Attack_damage;

	public:

	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(std::string str, int dps);
	ClapTrap(const ClapTrap & y);
	~ClapTrap();

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif
