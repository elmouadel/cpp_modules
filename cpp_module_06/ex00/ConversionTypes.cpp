/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionTypes.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 07:39:03 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/24 15:23:34 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionTypes.h"

ConversionTypes::ConversionTypes() : number(0), c(0){}

ConversionTypes::ConversionTypes(const ConversionTypes &conversiontypes)
{
    *this = conversiontypes;
}

ConversionTypes &ConversionTypes::operator = (const ConversionTypes &conversiontypes)
{
    if (this == &conversiontypes)
        return (*this);
    number = conversiontypes.number;
    c = conversiontypes.c;
    return (*this);
}

void ConversionTypes::toChar(long double number)
{
    std::cout << "char: ";
    if (number >= 0 && number < 256)
    {
        if (isprint(number))
            std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
        else 
            std::cout << "Non displayable" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void ConversionTypes::toInt(long double number)
{
    std::cout << "int: ";
    if (number <= INT_MAX && number >= INT_MIN && !c)
    {
        std::cout << static_cast<int>(number) << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void ConversionTypes::toFloat(long double number)
{
    std::cout << "float: ";
    if ((number <= FLT_MAX && number >= -FLT_MAX && !c) || isnan(number) || isinf(number))
    {
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void ConversionTypes::toDouble(long double number)
{
    std::cout << "double: ";
    if ((number <= DBL_MAX && number >= -DBL_MAX && !c) || isnan(number) || isinf(number))
    {
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(number) << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

 void ConversionTypes::convert(std::string arg)
{
    try {
        number = std::stold(arg);
    }
    catch (std::invalid_argument& e) {
        c = 1;
        if (arg.length() == 1)
            number = arg[0];
        else 
            number = -1;
    }
    catch (...) {
        number = DBL_MAX;
    }
    toChar(number);
    toInt(number);
    toFloat(number);
    toDouble(number);   
}

ConversionTypes::~ConversionTypes(){}
