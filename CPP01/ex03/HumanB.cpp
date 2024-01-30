/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:35:25 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 17:16:45 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Violence.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
};

void HumanB::setWeapon(Weapon *Weapon)
{
	_Weapon = Weapon;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << _Weapon->getType() << std::endl;
}
