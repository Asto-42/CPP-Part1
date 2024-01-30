/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:30:39 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 13:56:08 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string str)
{
	Zombie *newZombie = new Zombie[N];
	for (int x = 0; x < N; x++)
	{
		newZombie[x].setName(str);
	}
	return (newZombie);
}
