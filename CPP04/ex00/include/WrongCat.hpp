/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:42:40 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:43:09 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat:public WrongAnimal
{
	private:

	std::string type;

	public:

	WrongCat();
	~WrongCat();
	WrongCat(WrongCat & ref);

	WrongCat & operator=(WrongCat const & rhs);

	void makeSound() const;
	std::string getType( void ) const;

};

#endif
