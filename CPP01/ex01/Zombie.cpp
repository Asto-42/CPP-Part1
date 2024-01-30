/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:23:02 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 14:03:21 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->Name = "anonyme";
};

void Zombie::setName(std::string name)
{
	this->Name = name;
}

Zombie::Zombie(std::string str)
{
	std::cout << "A new zombie is born : " << str << std::endl;
	this->Name = str;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->Name << " is destroyed" << std::endl;
}

void Zombie::annonce(void)
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
