/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:13:21 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 17:15:36 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	private:

	bool guard_mode;

	public:

	ScavTrap();
	ScavTrap(std::string Name);
	~ScavTrap();

	void attack(const std::string & target);
	void guardGate(void);

};


#endif
