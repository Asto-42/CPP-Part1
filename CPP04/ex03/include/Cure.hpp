/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:11:49 by jquil             #+#    #+#             */
/*   Updated: 2024/03/01 14:14:26 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

class Cure:public AMateria
{
	private :
	std::string type;

	public :

	Cure();
	~Cure();
	//std::string const & getType();
	virtual Cure* clone() const;
	virtual void use(ICharacter & target);
};

#endif
