/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:23:02 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 16:48:59 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Violence.hpp"

Weapon::Weapon(void)
{
	this->type = "hands";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
};

void Weapon::setType(std::string name)
{
	this->type = name;
}

std::string Weapon::getType(void)
{
	return (this->type);
}
