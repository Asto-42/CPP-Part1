/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:10:46 by jquil             #+#    #+#             */
/*   Updated: 2024/02/29 13:08:37 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Brain::Brain()
{
	std::cout << "\033[34mDefault Brain constructor called\033[0m" << std::endl;
	for (int x = 0; x < 100; x++)
		this->ideas[x] = "Default";
};

Brain::~Brain()
{
	std::cout << "\033[34mDefault Brain destructor called\033[0m" << std::endl;
};
