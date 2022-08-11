/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:14:20 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/11 15:07:56 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

# include <iostream>
# include <iomanip>
# include <string>
# include <stack>
# include <deque>
# include <list>

template<typename T> class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack() {};
        ~MutantStack() {};
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};


#endif
