/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:13:11 by jquil             #+#    #+#             */
/*   Updated: 2024/02/20 15:15:54 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "\033[34mDefault ScavTrap constructor called\033[0m" << std::endl;
	this->hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	this->guard_mode = 0;
};

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "\033[34mCustom Name ScavTrap constructor called for "<< this->Name << "\033[0m" << std::endl;
	this->hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	this->guard_mode = 0;
};

ScavTrap::ScavTrap(const ScavTrap & y)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = y;
};

void ScavTrap::attack(const std::string & target)
{
	if (this->Energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "The ScavTrap " << this->Name << " attack the ScavTrap " << target << std::endl;
		this->Energy_points--;
	}
	else if (this->Energy_points == 0)
		std::cout << "The ScavTrap " << this->Name << " can't attack the ScavTrap " << target << " because he don't have energy points" << std::endl;
	else
		std::cout << "The ScavTrap " << this->Name << " can't attack the ScavTrap " << target << " because he is dead" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->guard_mode == 0)
	{
		this->guard_mode = 1;
		std::cout << "ScavTrap " << this->Name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->Name << " is already guarding the gate." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[34mDeconstructing " << this->Name << "\033[0m" << std::endl;
};
