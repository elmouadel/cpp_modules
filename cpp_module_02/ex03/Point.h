/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:18:49 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/29 15:46:43 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT
# define POINT

# include <iostream>
# include <iomanip>
# include <string>
# include "Fixed.h"
# include <math.h>

class Point
{
    Fixed const x;
    Fixed const y;
    public:
        Point();
        Point(Fixed &x, Fixed &y);
        Point(Fixed x, Fixed y);
        Point &operator = (const Point &point);
        Point(const Point &point);
        Point  const  operator - (Point const &point) const;
        static Fixed  crossPro(Point const u, Point const v);
        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif