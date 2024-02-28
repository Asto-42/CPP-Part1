/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:36:30 by jquil             #+#    #+#             */
/*   Updated: 2024/02/23 17:57:50 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap Luffy("Monkey D. Luffy", 5);
    ClapTrap Pikachu("Pikachu", 3);
    ClapTrap Zoro("Roronoa Zoro", 4);


    // Round 1
    Luffy.attack("Pikachu");
    Pikachu.takeDamage(5);


    // Round 2
    Zoro.attack("Monkey D. Luffy");
    Luffy.takeDamage(4);


    // Round 3
    Pikachu.attack("Team Rocket Grunt");
    Zoro.takeDamage(3);


    // Round 4
    Zoro.attack("Pikachu");
    Pikachu.takeDamage(4);
    Luffy.attack("Pikachu");
    Pikachu.takeDamage(5);
    Pikachu.attack("Luffy");


    // Healing Rounds
    Luffy.beRepaired(4);
    Pikachu.beRepaired(3);
    Zoro.beRepaired(1);



    return (0);
}

// int main(void)
// {
// 	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
// 	{
// 		std::cout << "\033[34mConstructing\033[0m" << std::endl;
// 		ClapTrap a("Billy");
// 		ClapTrap b("Cody");

// 		std::cout << "\n\033[34mTesting\033[0m" << std::endl;
// 		a.attack("some other robot");
// 		a.takeDamage(10);
// 		a.takeDamage(10);
// 		a.beRepaired(5);
// 		a.attack("some other other robot");
// 		b.beRepaired(3);
// 		for (int i = 0; i < 12; i++)
// 			b.attack("Cody-clone");
// 		b.beRepaired(3);
// 	}
// 	return (0);
// }
