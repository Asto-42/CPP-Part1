/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Violence.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:09:57 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:02:33 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIOLENCE_HPP
# define VIOLENCE_HPP

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
#include "HumanA.hpp"
#include "HumanB.hpp"
#endif
