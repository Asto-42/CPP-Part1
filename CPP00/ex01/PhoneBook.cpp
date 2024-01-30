/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:39:16 by jquil             #+#    #+#             */
/*   Updated: 2024/01/17 14:42:08 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MAPB.hpp"

PhoneBook::PhoneBook()
{
}

bool	PhoneBook::AddStuff(int x)
{
	std::string str;

	std::cout << "ADD MODE" << std::endl;

	std::cout << "First Name : " << std::endl;
	while (this->_Contact[x].getFirstName() == "(empty)")
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
			return false;
		this->_Contact[x].setFirstName(str);
		if (this->_Contact[x].getFirstName() == "(empty)")
			std::cout << "\rInvalid First name, please retry" << std::endl;
	}
	std::cout << "Last Name : " << std::endl;
	while (this->_Contact[x].getLastName() == "(empty)")
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
			return false;
		this->_Contact[x].setLastName(str);
		if (this->_Contact[x].getLastName() == "(empty)")
			std::cout << "\rInvalid Last name, please retry" << std::endl;
	}
	std::cout << "Nick Name : " << std::endl;
	while (this->_Contact[x].getNickName() == "(empty)")
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
			return false;
		this->_Contact[x].setNickName(str);
		if (this->_Contact[x].getNickName() == "(empty)")
			std::cout << "\rInvalid Nick name, please retry" << std::endl;
	}

	std::cout << "Phone Number : " << std::endl;
	while (this->_Contact[x].getPhoneNumber() == "(empty)")
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
			return false;
		this->_Contact[x].setPhoneNumber(str);
		if (this->_Contact[x].getPhoneNumber() == "(empty)")
			std::cout << "\rInvalid Phone number, please retry" << std::endl;
	}

	std::cout << "Darkest Secret : " << std::endl;
	while (this->_Contact[x].getDarkestSecret() == "(empty)")
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
			return false;
		this->_Contact[x].setDarkestSecret(str);
		if (this->_Contact[x].getDarkestSecret() == "(empty)")
			std::cout << "\rInvalid Darkest Secret, please retry" << std::endl;
	}

	x++;
	if (x == 8)
		x = 0;
	return true;
}

void	PhoneBook::ResearchPart()
{
	//Research
	std::string str;
	std::getline(std::cin, str);
	if (std::cin.eof())
		return ;
	long int x = atol((const_cast <char*>(str.c_str())));
	if (x >= 1 && x <= 8)
	{
		std::cout << "First Name : " << _Contact[x - 1].getFirstName() << std::endl;
		std::cout << "Last Name : " << _Contact[x - 1].getLastName() << std::endl;
		std::cout << "Nick Name : " <<_Contact[x - 1].getNickName() << std::endl;
		std::cout << "Phone number : " <<_Contact[x - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " <<_Contact[x - 1].getDarkestSecret() << std::endl;
		std::cout << std::endl;
	}
}

void	PhoneBook::SearchStuff()
{
	int	x = 0;

	//Contact index";
	while (++x <= 8)
		std::cout << std::setw(10) << x << "|";
	std::cout << std::endl;

	//First name;
	x = 0;
	while (++x <= 8)
	{
		if (_Contact[x - 1].getFirstName().length() > 10)
		{
			std::cout << std::setw(9) << _Contact[x - 1].getFirstName().substr(0, 9);
			std::cout << ".|";
		}
		else
			std::cout << std::setw(10) << _Contact[x - 1].getFirstName() << "|";
	}
	std::cout << std::endl;

	//Last name;
	x = 0;
	while (++x <= 8)
	{
		if (_Contact[x - 1].getLastName().length() > 10)
		{
			std::cout << std::setw(9) << _Contact[x - 1].getLastName().substr(0, 9);
			std::cout << ".|";
		}
		else
			std::cout << std::setw(10) << _Contact[x - 1].getLastName() << "|";
	}
	std::cout << std::endl;

	//Nick name;
	x = 0;
	while (++x <= 8)
	{
		if (_Contact[x - 1].getNickName().length() > 10)
		{
			std::cout << std::setw(9) << _Contact[x - 1].getNickName().substr(0, 9);
			std::cout << ".|";
		}
		else
			std::cout << std::setw(10) << _Contact[x - 1].getNickName() << "|";
	}
	std::cout << std::endl;

	ResearchPart();
}
