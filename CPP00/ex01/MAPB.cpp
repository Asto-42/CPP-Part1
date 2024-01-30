/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAPB.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:12:22 by jquil             #+#    #+#             */
/*   Updated: 2024/01/17 14:41:33 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MAPB.hpp"

//std::cout << res << std::endl;

int	main(void)
{
	std::string str;
	int	nb_contact = 0;
	bool	run = 0;
	PhoneBook Rep;
	while (run == 0)
	{
		std::cout << "ADD - SEARCH - EXIT" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof() || (str == "EXIT"))
			run = 1;
		if (str == "ADD")
		{
			if (Rep.AddStuff(nb_contact) == false)
				return (0);
			nb_contact++;
		}
		if (str == "SEARCH")
			Rep.SearchStuff();
	}
	return (0);
	//if (std::cin == "ADD" << std::endl)
}
