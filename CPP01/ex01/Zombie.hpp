/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:22:48 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 13:55:32 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include <cstdio>
#include <iomanip>


class Zombie
{
	private:

	std::string Name;

	public:

	Zombie();
	Zombie(std::string str);
	void annonce(void);
	void setName(std::string name);
	~Zombie();
};

Zombie* zombieHorde(int N, std::string str);

#endif
