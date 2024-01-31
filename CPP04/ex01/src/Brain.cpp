/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:10:46 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 14:30:41 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Brain::Brain()
{
	std::cout << "\033[34mDefault Brain constructor called\033[0m" << std::endl;
};

Brain::~Brain()
{
	std::cout << "\033[34mDefault Brain destructor called\033[0m" << std::endl;
};
