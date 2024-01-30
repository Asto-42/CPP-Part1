/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:55:07 by jquil             #+#    #+#             */
/*   Updated: 2024/01/17 14:28:36 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MAPB.hpp"

Contact::Contact()
{
	this->FirstName = "(empty)";
	this->LastName = "(empty)";
	this->NickName = "(empty)";
	this->PhoneNumber = "(empty)";
	this->DarkestSecret = "(empty)";
}

std::string Contact::getFirstName()
{
	return FirstName;
}

std::string Contact::getLastName()
{
	return LastName;
}

std::string Contact::getNickName()
{
	return NickName;
}

std::string Contact::getPhoneNumber()
{
	return PhoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return DarkestSecret;
}

bool Contact::setFirstName(std::string name)
{
	if (name == "")
		return false;
	char c = name[0];
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == 45)))
		return false;
	this->FirstName = name;
	return true;
}

bool Contact::setLastName(std::string name)
{
	if (name == "")
		return false;
	char c = name[0];
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == 32) || c == 45))
		return false;
	LastName = name;
	return true;
}

bool Contact::setNickName(std::string name)
{
	if (name == "")
		return false;
	char c = name[0];
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == 32)))
		return false;
	NickName = name;
	return true;
}

bool Contact::setPhoneNumber(std::string number)
{
	if (number == "")
		return false;
	int i = -1;
	int n = number.length();
	char c;
	bool found = false;
	while(++i < n && found == false)
	{
		c = number.at(i);
		if ((c >= '0' && c <= '9') || c == '+')
			found = true;
	}
	if (found && ((number.length() == 12 && number[0] != '+') || (number.length() == 10 && number[0] != '0')))
		return false;
	PhoneNumber = number;
	return true;
}

bool Contact::setDarkestSecret(std::string sentence)
{
	if (sentence == "")
		return false;
	char c = sentence[0];
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '.' || c == 33) || (c == 63) || (c == 32)))
		return false;
	DarkestSecret = sentence;
	return true;
}
