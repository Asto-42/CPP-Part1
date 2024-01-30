/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:22:31 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 17:39:06 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Violence.hpp"

int	main(void)
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", &club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}

	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(&club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	return (0);
}
