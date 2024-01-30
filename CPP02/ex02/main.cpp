/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:36:30 by jquil             #+#    #+#             */
/*   Updated: 2024/01/24 17:51:37 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(5.05f);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(2);
	// std::cout << "A1 = " << a << std::endl;
	// std::cout << "++A = " << ++a << std::endl;
	// std::cout << "A2 = " << a << std::endl;
	// std::cout << "A2++ = " << a++ << std::endl;
	// std::cout << "A3 = " << a << std::endl;
	// std::cout << "a = " << a << "\nc = " << c << std::endl;
	std::cout << "res -> " << b << "\nShould be 10.1016 "<<  std::endl;
	// std::cout << a << std::endl;
	return 0;
}
