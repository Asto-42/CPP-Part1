/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:01:49 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:02:07 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
	private:

	std::string name;
	Weapon *_Weapon;

	public:

	HumanB(std::string name);
	void setWeapon(Weapon *Weapon);
	void attack(void);
};
#endif
