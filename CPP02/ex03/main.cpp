/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:36:30 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 14:53:32 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	std::string str;

	float a_x;
	float a_y;
	float b_x;
	float b_y;
	float c_x;
	float c_y;
	float m_x;
	float m_y;
	bool res;

	//A point assign
	//x
	std::cout << "First, you need to setup points\nTriangle ABC - M is the point we test\nA(x.a ; y.a)\nB(x.b ; y.b)\nC(x.c ; y.c)\nM(x.m ; y.m)" << std::endl;
	std::cout << "Enter x.a" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return false;
	a_x = atoi(str.c_str());
	//y
	std::cout << "Enter y.a" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return false;
	a_y = atoi(str.c_str());
	Point a(a_x, a_y);
	std::cout << "Point A is setup\nA(" << a.getX() << " ; " << a.getY() << ")\n" << std::endl;

	//B point assign
	//x
	std::cout << "Enter x.b" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return false;
	b_x = atoi(str.c_str());
	//y
	std::cout << "Enter y.b" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return false;
	b_y = atoi(str.c_str());
	Point b(b_x, b_y);
	std::cout << "Point B is setup\nB(" << b.getX() << " ; " << b.getY() << ")\n" << std::endl;


	//C point assign
	//x
	std::cout << "Enter x.c" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return false;
	c_x = atoi(str.c_str());
	//y
	std::cout << "Enter y.c" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return false;
	c_y = atoi(str.c_str());
	Point c(c_x, c_y);
	std::cout << "Point C is setup\nC(" << c.getX() << " ; " << c.getY() << ")\n" << std::endl;


	//M point assign
	//x
	std::cout << "Enter x.m" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return false;
	m_x = atoi(str.c_str());
	std::cout << "Enter y.m" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return false;
	m_y = atoi(str.c_str());
	Point m(m_x, m_y);
	std::cout << "Point M is setup\nC(" << m.getX() << " ; " << m.getY() << ")\n\n" << std::endl;

	std::cout << "Coord recap : \n" << std::endl;
	std::cout << "Point A is setup\nA(" << a.getX() << " ; " << a.getY() << ")\n" << std::endl;
	std::cout << "Point B is setup\nB(" << b.getX() << " ; " << b.getY() << ")\n" << std::endl;
	std::cout << "Point C is setup\nC(" << c.getX() << " ; " << c.getY() << ")\n" << std::endl;
	std::cout << "Point M is setup\nM(" << m.getX() << " ; " << m.getY() << ")\n" << std::endl;
	res = bsp(a, b, c, m);
	if (res == 1)
		std::cout << "M is in ABC" << std::endl;
	else
		std::cout << "M is not in ABC" << std::endl;
	return 0;
}
