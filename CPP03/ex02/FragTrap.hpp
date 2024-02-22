/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:14:16 by jquil             #+#    #+#             */
/*   Updated: 2024/02/20 15:17:55 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
	private:

	public:

	FragTrap();
	FragTrap(std::string Name);
	FragTrap(const FragTrap & y);
	~FragTrap();

	void highFivesGuys(void);

};


#endif
