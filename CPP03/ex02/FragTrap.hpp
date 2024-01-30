/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:14:16 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 17:17:37 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
	private:

	public:

	FragTrap();
	FragTrap(std::string Name);
	~FragTrap();

	void highFivesGuys(void);

};


#endif
