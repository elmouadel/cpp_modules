/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionTypes.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 07:39:05 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 14:55:08 by eabdelha         ###   ########.fr       */
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

// 3402823466385288598117041834845169254410044444545775454507548458668768768754545758758764545645676876767
// 3402823466385288598013556733762124306643463550202763735537703275576689504312021115454694079020882984960
// 3402823466385288794951615683145408871103914354436992896411696584487333471214504152736115991698894487552
// 9007199254740992

#endif
