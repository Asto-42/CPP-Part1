/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:40:51 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:43:28 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
	protected :

	std::string type;

	public :

	WrongAnimal();
	WrongAnimal(WrongAnimal & ref);
	~WrongAnimal();

	WrongAnimal & operator=(WrongAnimal const & rhs);

	void makeSound() const;
	std::string getType(void) const;
};


#endif
