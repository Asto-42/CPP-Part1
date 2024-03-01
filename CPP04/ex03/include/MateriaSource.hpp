/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:11:02 by jquil             #+#    #+#             */
/*   Updated: 2024/03/01 14:15:11 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class MateriaSource:public IMateriaSource
{
	private :


	public:

	AMateria *inventory[4];
	MateriaSource();
	MateriaSource(MateriaSource const & ref);
	MateriaSource & operator=(MateriaSource const & ref);


	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* src);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
