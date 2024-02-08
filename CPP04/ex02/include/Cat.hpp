/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:35:04 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:46:06 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP


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
