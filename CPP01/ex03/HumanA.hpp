/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:00:45 by jquil             #+#    #+#             */
/*   Updated: 2024/02/07 14:01:19 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
	private:

	std::string name;

	public:

	Weapon *_Weapon;
	HumanA(std::string name, Weapon *Weapon);
	void attack(void);
};

#endif
