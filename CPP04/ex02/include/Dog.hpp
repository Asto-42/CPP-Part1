/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:34:56 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 14:27:16 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

class Dog: public Animal
{
	private:

	std::string type;
	Brain* brain;

	public:

	Dog();
	Dog(Dog & ref);
	~Dog();

	Dog & operator=(Dog const & rhs);

	void makeSound() const;
	std::string getType( void ) const;

};


#endif
