/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:34:28 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 15:24:26 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

# include <algorithm>
# include <iostream>
# include <string>
# include <vector>

class Span
{
    typedef std::vector<int>::iterator iterator;
    typedef std::vector<int>              type_name;
    
    type_name numbers;
    unsigned  size;
  
    public:
        Span(unsigned n);
        Span(const Span &span);
        Span &operator = (const Span &span);
        int const &operator[](size_t index) const ;
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
