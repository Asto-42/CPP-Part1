/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:36:30 by jquil             #+#    #+#             */
/*   Updated: 2024/02/13 14:44:47 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;
	Fixed d((Fixed(4.3f) * Fixed(2)));
	Fixed c((Fixed(8.2f) * Fixed(3)));
	std::cout << "d = " << d << "	c = " << c << "\nc + d = " << c + d << "	should be 33.19" << std::endl;
	std::cout << "c - d = " << c - d << "	should be 15.99" << std::endl;
	std::cout << "c * d = " << c * d << "	should be 211.578" << std::endl;
	std::cout << "c / d = " << c / d << "	should be 2.85967" << std::endl;
	std::cout << "c > d = " << (c > d) << "	should be 1" << std::endl;
	std::cout << "c > d = " << (c < d) << "	should be 0" << std::endl;
	std::cout << "c > d = " << (c >= d) << "	should be 1" << std::endl;
	std::cout << "c > d = " << (c <= d) << "	should be 0" << std::endl;
	std::cout << "(c >= c) = " << (c >= c) << "	should be 1" << std::endl;
	std::cout << "(c <= c) = " << (c <= c) << "	should be 1" << std::endl;
	std::cout << "(c == c) = " << (c == c) << "	should be 1" << std::endl;
	std::cout << "(c == d) = " << (c == d) << "	should be 0" << std::endl;
	std::cout << "(c != c) = " << (c != c) << "	should be 0" << std::endl;
	std::cout << "(c != d) = " << (c != d) << "	should be 1" << std::endl;
	std::cout << "(c min d) = " << (Fixed::min(c, d)) << "	should be 8.60156" << std::endl;
	std::cout << "(a max b) = " << Fixed::max(a, b) << "	should be 10.1016" << std::endl;
	return 0;
}
