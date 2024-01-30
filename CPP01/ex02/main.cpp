/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:22:31 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 14:20:42 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdio>
#include <iomanip>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	//int *stringptr = &stringPTR;
	//int *stringref = &stringREF;

	std::cout << "string : " << string << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << "\n" << std::endl;

	std::cout << "string : " << &string << std::endl;
	std::cout << "stringPTR : " << &stringPTR << std::endl;
	std::cout << "stringREF : " << &stringREF << std::endl;
}
