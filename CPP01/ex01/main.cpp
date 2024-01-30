/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:22:31 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 13:59:23 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int n = 6;
	int x = 0;

	horde = zombieHorde(n, "test");
	while (x < n)
	{
		horde[x].annonce();
		x++;
	}
	delete[] horde;
	return (0);
}
