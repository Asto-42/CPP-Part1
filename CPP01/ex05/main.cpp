/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:36:30 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 19:06:32 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(void)
{
	Harl harlou;
	std::string str;
	std::cout << "DEBUG - INFO - WARNING - COMPLAIN" << std::endl;
	std::getline(std::cin, str);
	harlou.complain(str);
}