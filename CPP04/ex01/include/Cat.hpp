/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:35:04 by jquil             #+#    #+#             */
/*   Updated: 2024/01/31 14:27:22 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H


class Cat:public Animal
{
	private:

	std::string type;
	Brain* brain;

	public:

	Cat();
	~Cat();
	Cat(Cat & ref);

	Cat & operator=(Cat const & rhs);

	void makeSound() const;
	std::string getType( void ) const;

};

#endif
