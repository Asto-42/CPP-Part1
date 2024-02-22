/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:14:32 by jquil             #+#    #+#             */
/*   Updated: 2024/02/20 15:18:13 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "\033[34mDefault FragTrap constructor called for "<< this->Name <<  "\033[0m" << std::endl;
	this->hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
};

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "\033[34mCustom Name FragTrap constructor called for " << this->Name << "\033[0m" << std::endl;
	this->hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
};

FragTrap::FragTrap(const FragTrap & y)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = y;
};

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->Name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[34mDeconstructing FragTrap " << this->Name << "\033[0m" << std::endl;
};
