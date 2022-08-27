/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:14:20 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 14:56:41 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template<typename T> class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack() {};
        MutantStack(const MutantStack<T> &ref) { (void)ref; };
        MutantStack<T> &operator = (const MutantStack<T> &ref) {
            (void)ref;
            return (*this);
        }
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
        ~MutantStack() {};
};


#endif
