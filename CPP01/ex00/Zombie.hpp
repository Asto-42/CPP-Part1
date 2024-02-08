/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:22:48 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 13:59:08 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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
	~Zombie();
};

Zombie* newZombie(std::string Name);
void randomChump(std::string Name);

#endif
