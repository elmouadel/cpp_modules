/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionTypes.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 07:39:05 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/24 14:42:48 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONTYPES_H
#define CONVERSIONTYPES_H

# include <iostream>
# include <iomanip>
# include <string>
#include <limits.h>
#include <float.h>
#include <limits>


class ConversionTypes
{
    long double number;
    bool        c;    
    std::string literalStr;
    
    public:
        ConversionTypes();
        ConversionTypes(const ConversionTypes &conversiontypes);
        ConversionTypes &operator = (const ConversionTypes &conversiontypes);
        void convert(std::string arg);
        void toChar(long double number);
        void toInt(long double number);
        void toFloat(long double number);
        void toDouble(long double number);
        ~ConversionTypes();
};

#endif
