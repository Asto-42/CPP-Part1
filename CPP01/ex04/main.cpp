/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:41:08 by jquil             #+#    #+#             */
/*   Updated: 2024/01/23 18:32:23 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
	std::fstream infile("file.in");
	std::ofstream outfile("file.out");
	std::string str;
	std::string s2 = argv[3];
	size_t x;

	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	infile.open(argv[1], std::ios::in);
	if (!infile)
		std::cout << "cant open file" << std::endl;
	else if (infile && outfile)
	{
		while (getline(infile, str))
		{
			x = str.find(argv[2]);
			if (x == str.size())
				outfile << str << std::endl;
			else
			{
				str.replace(x, s2.size(), s2);
				outfile << str << std::endl;
				std::cout << str << std::endl;
			}
		}
	}
	outfile.close();
}
