/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:37:09 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 18:54:36 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed apDir;
    Fixed bpDir;
    Fixed cpDir;
    
    
    apDir = Point::crossPro(b - a, point - a);
    bpDir = Point::crossPro(c - b, point - b);
    cpDir = Point::crossPro(a - c, point - c);
    if ((apDir  > 0 && bpDir > 0 && cpDir > 0) || (apDir < 0 && bpDir < 0 && cpDir < 0))
        return (1);
    return (0);
}