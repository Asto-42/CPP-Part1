/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:56 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:43:54 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:

	std::string type;

	public:

	Dog();
	Dog(Dog & ref);
	~Dog();

	Dog & operator=(Dog const & rhs);

	void makeSound() const;
	std::string getType( void ) const;

};


#endif
