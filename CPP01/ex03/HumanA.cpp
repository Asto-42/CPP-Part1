/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:35:05 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 17:38:42 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Violence.hpp"

HumanA::HumanA(std::string name, Weapon *Weapon)
{
	this->name = name;
	this->_Weapon = Weapon;
};

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->_Weapon->getType() << std::endl;
}
