/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:24:41 by jquil             #+#    #+#             */
/*   Updated: 2024/02/20 15:14:52 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void)
{
	std::cout << "\033[34mDefault constructor called\033[0m" << std::endl;
	this->Name = "No Name";
	this->hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 5;
};

ClapTrap::ClapTrap(const ClapTrap & y)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = y;
};
ClapTrap::ClapTrap(std::string str)
{
	std::cout << "\033[34mCustom Name constructor called\033[0m" << std::endl;
	this->Name = str;
	this->hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 5;
};

ClapTrap::ClapTrap(std::string str, int dps)
{
	std::cout << "\033[34mCustom Name and Attack damage constructor called\033[0m" << std::endl;
	this->Name = str;
	this->hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = dps;
};

void ClapTrap::attack(const std::string & target)
{
	if (this->Energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "The ClapTrap " << this->Name << " attack the ClapTrap " << target << std::endl;
		this->Energy_points--;
	}
	else if (this->Energy_points == 0)
		std::cout << "The ClapTrap " << this->Name << " can't attack the ClapTrap " << target << " because he don't have energy points" << std::endl;
	else
		std::cout << "The ClapTrap " << this->Name << " can't attack the ClapTrap " << target << " because he is dead" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points == 0)
		return ;
	std::cout << "The ClapTrap " << this->Name << " is attack	HP = " << this->hit_points << "/10"<< std::endl;
	if (this->hit_points < amount)
		this->hit_points = 0;
	else
		this->hit_points = this->hit_points - amount;
	if (this->hit_points == 0)
		std::cout << "The ClapTrap " << this->Name << " is dead, rip" << std::endl;
	else
		std::cout << "The ClapTrap " << this->Name << " is now " << this->hit_points << "/10" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points == 0)
	{
		std::cout << "The ClapTrap " << this->Name << " can't repair because he don't have energy points" << std::endl;
		return ;
	}
	std::cout << "The ClapTrap " << this->Name << " start to repair	HP = " << this->hit_points << "/10"<< std::endl;
	if (this->hit_points < 10)
		this->hit_points = this->hit_points + amount;
	if (this->hit_points > 10)
		this->hit_points = 10;
	std::cout << "Repaire is finish - ClapTrap is now " << this->hit_points << "/10" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[34mDeconstructing " << this->Name << "\033[0m" << std::endl;
};
