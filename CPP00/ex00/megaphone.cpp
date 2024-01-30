/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:01:23 by jquil             #+#    #+#             */
/*   Updated: 2024/01/17 14:56:10 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int x = 1 ; x < argc ; x++)
	{
		std::string str = (argv[x]);
		for (size_t y = 0 ; y <= str.length(); y++)
			std::cout << (char)toupper(str[y]);
	}
	std::cout << std::endl;
	return (0);
}


