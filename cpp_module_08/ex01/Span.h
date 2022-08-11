/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:34:28 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/11 10:27:43 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

# include <iostream>
# include <iomanip>
# include <string>
# include <vector>

typedef std::vector<size_t>::iterator iterator;

class Span
{
    std::vector<size_t>    numbers;
    size_t              size;
    public:
        Span(size_t n);
        Span(const Span &span);
        Span &operator = (const Span &span);
        size_t const &operator[](size_t index) const ;
        void addNumber(size_t num);
        void addNumber(iterator begin, iterator end);
        size_t shortestSpan(void);
        size_t longestSpan(void);
        class noSpan : public std::exception {
          const char *what() const throw();  
        };
        ~Span();
};

#endif
