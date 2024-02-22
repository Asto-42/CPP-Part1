/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:01 by jquil             #+#    #+#             */
/*   Updated: 2024/02/08 17:10:51 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

int main(void)
{

	IMateriaSource* src1 = new MateriaSource();
	IMateriaSource* src2 = new MateriaSource();
	IMateriaSource* src_test = new MateriaSource();
	//std::cout << "//	Learn materia part" << std::endl;
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());

	src_test->learnMateria(new Cure());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	//std::cout << "//	Finish try to learn materia\n\n" << std::endl;

	//std::cout << "//	Create materia part" << std::endl;
	AMateria* Jimmy_ice_staff = src1->createMateria("ice");
	AMateria* Jimmy_ice_staff_2 = src1->createMateria("ice");
	AMateria* Jimmy_cure_staff = src1->createMateria("cure");
	AMateria* Jimmy_cure_staff_2 = src1->createMateria("cure");
	//std::cout << "\n//	Overflow test create" << std::endl;
	AMateria* Jimmy_overflow_test_staff = src_test->createMateria("cure");
	//std::cout << "//	Overflow test finish\n" << std::endl;
	AMateria* Bob_cure_staff = src2->createMateria("cure");
	//std::cout << "//	Finish try to create materia\n\n" << std::endl;

	//std::cout << "//	Create characters part" << std::endl;
	ICharacter* Jimmy = new Character("Jimmy");
	ICharacter* bob = new Character("bob");
	//ICharacter* Gandalf = new Character("gandalf");
	//*Gandalf = *Jimmy;
	//std::cout << "//	Finish create characters part\n\n" << std::endl;
	Jimmy->equip(Jimmy_ice_staff);
	Jimmy->equip(Jimmy_ice_staff_2);
	Jimmy->equip(Jimmy_cure_staff);
	Jimmy->equip(Jimmy_cure_staff_2);
	Jimmy->equip(Jimmy_overflow_test_staff);

	bob->equip(Bob_cure_staff);

	Jimmy->use(1, *bob);
	Jimmy->use(2, *bob);

	delete bob;
	delete Jimmy;
	delete src1;
	delete src2;
	delete src_test;
	return 0;
}
