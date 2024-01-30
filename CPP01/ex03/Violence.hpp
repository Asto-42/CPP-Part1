/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Violence.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:09:57 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 17:38:36 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIOLENCE_H
# define VIOLENCE_H

#include <string>
#include <iostream>
#include <cstdio>
#include <iomanip>

class Weapon
{
	private:

	std::string type;

	public:

	Weapon();
	Weapon(std::string type);
	std::string getType(void);
	void setType(std::string newtype);
};

class HumanA
{
	private:

	std::string name;

	public:

	Weapon *_Weapon;
	HumanA(std::string name, Weapon *Weapon);
	void attack(void);
};

class HumanB
{
	private:

	std::string name;
	Weapon *_Weapon;

	public:

	HumanB(std::string name);
	void setWeapon(Weapon *Weapon);
	void attack(void);
};
#endif
