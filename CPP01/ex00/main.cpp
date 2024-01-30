/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:22:31 by jquil             #+#    #+#             */
/*   Updated: 2024/01/17 17:30:10 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	{
	Zombie Manu("Manu");
	Manu.annonce();
	}

	Zombie	*createZombi = newZombie("Connor");
	createZombi->annonce();
	delete createZombi;

	randomChump("Arthas");

	return (0);
}
