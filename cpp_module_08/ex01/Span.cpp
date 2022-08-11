/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:34:30 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/11 10:30:44 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

Span::Span(size_t n) : size(n) {}

Span::Span(const Span &span)
{
    *this = span;
}

Span &Span::operator = (const Span &span)
{
    if (this == &span)
        return (*this);
    numbers = span.numbers;
    size = span.size;
    return (*this);
}

size_t const &Span::operator[](size_t index) const 
{
    if (index >= size || index < 0)
        throw (std::out_of_range("unable to access element!"));
    return (numbers[index]);
}

void Span::addNumber(size_t num)
{
    if (numbers.size() >= size)
        throw (std::out_of_range("unable to add more elements!"));
    numbers.push_back(num);
}

void Span::addNumber(iterator begin, iterator end)
{
    for (iterator it = begin; it < end; it++)
        addNumber(*it);
}

size_t Span::shortestSpan(void)
{
    if (numbers.size() < 2)
        throw (noSpan());
    iterator    min1 = std::min_element(numbers.begin(), numbers.end());
    size_t      min2 = *std::max_element(numbers.begin(), numbers.end());
    
    for (iterator  it = numbers.begin() ; it != numbers.end() - 1 ; it++)
        if (it != min1 && *it < min2)
            min2 = *it;
    return (min2 - *min1);
}

size_t Span::longestSpan(void)
{
    if (numbers.size() < 2)
        throw (noSpan());
    return (*std::max_element(numbers.begin(), numbers.end()) 
            - *std::min_element(numbers.begin(), numbers.end()));
}

const char *Span::noSpan::what() const throw()
{
    return ("No span can be found!!");
}

Span::~Span(){}