/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:01 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 14:04:23 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	const WrongAnimal* i = new WrongCat();

	std::cout << "Meta is : " << meta->getType() << " " << std::endl;
	std::cout << "J is : " << j->getType() << " " << std::endl;
	std::cout << "K is : " << k->getType() << " " << std::endl;
	std::cout << "I is : " << i->getType() << " " << std::endl;

	i->makeSound();
	k->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete k;
	delete i;

	return 0;
}
