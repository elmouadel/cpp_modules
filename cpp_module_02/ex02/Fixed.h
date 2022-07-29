/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:51:57 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/27 20:42:43 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

# include <iostream>
# include <iomanip>
# include <string>

class Fixed
{
    int                 fpnValue;
    static const int    nbFractionalBits;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &fixed);
        Fixed   &operator = (const Fixed &fixed);
        bool    operator > (const Fixed &fixed);
        bool    operator >= (const Fixed &fixed);
        bool    operator < (const Fixed &fixed);
        bool    operator <= (const Fixed &fixed);
        bool    operator == (const Fixed &fixed);
        bool    operator != (const Fixed &fixed);
        Fixed   operator + (const Fixed &fixed);
        Fixed   operator - (const Fixed &fixed);
        Fixed   operator * (const Fixed &fixed);
        Fixed   operator / (const Fixed &fixed);
        Fixed   &operator ++ (void);
        Fixed   operator ++ (int);
        Fixed   &operator -- (void);
        Fixed   operator -- (int);
        static Fixed   &min(Fixed &f1, Fixed &f2);
        static Fixed   &min(Fixed const &f1, Fixed const &f2);
        static Fixed   &max(Fixed &f1, Fixed &f2);
        static Fixed   &max(Fixed const &f1, Fixed const &f2);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat( void ) const;
        int     toInt( void ) const;
        ~Fixed();
};

std::ostream &operator << (std::ostream &output, const Fixed &fixed);

#endif