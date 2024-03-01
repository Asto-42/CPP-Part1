/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:11:24 by jquil             #+#    #+#             */
/*   Updated: 2024/03/01 14:14:41 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

class Ice:public AMateria
{
	private :

	public :

	Ice();
	~Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter & target);
};

#endif
