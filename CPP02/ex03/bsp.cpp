/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:28:16 by jquil             #+#    #+#             */
/*   Updated: 2024/01/30 15:17:14 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	//(xa - xm)(yb - ym) - (ya - ym)(xb - xm)
	//(xb - xm)(yc - ym) - (yb - ym)(xc - xm)
	//(xc - xm)(ya - ym) - (yc - ym)(xa - xm)

	float scal_1 = (a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX());
	float scal_2 = (b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX());
	float scal_3 = (c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX());

	if (scal_1 != 0)
		scal_1 = scal_1 / scal_1;
	if (scal_2 != 0)
		scal_2 = scal_2 / scal_2;
	if (scal_3 != 0)
		scal_3 = scal_3 / scal_3;
	// std::cout << scal_1 << std::endl;
	// std::cout << scal_2 << std::endl;
	// std::cout << scal_3 << std::endl;
	if (scal_1 == scal_2 && scal_1 == scal_3)
		return (1);
	else
		return (0);
	return (0);
}
