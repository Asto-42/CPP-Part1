/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:13:21 by jquil             #+#    #+#             */
/*   Updated: 2024/02/20 15:17:19 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	private:

	bool guard_mode;

	public:

	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap & y);
	~ScavTrap();

	void attack(const std::string & target);
	void guardGate(void);

};


#endif
