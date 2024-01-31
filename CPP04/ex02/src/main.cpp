/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:01 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 14:39:49 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal* animals[8];
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	animals[4] = new Dog();
	animals[5] = new Dog();
	animals[6] = new Cat();
	animals[7] = new Cat();
	int count = 0;
	while (count < 8)
	{
		delete animals[count];
		count++;
	}

	delete j;
	delete i;

}
