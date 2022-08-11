/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 07:29:05 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/10 09:26:17 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

# include <iostream>
# include <iomanip>
# include <string>

template<class T> class Array
{
    T       *array;
    size_t  n;
    public:
        Array() : array(new T[1]()), n(1) {};
        Array(size_t size) : array(new T[size]()), n(size) {};
        Array(const Array &ref) : array(new T[1]) {
            *this = ref;
        };
        Array &operator = (const Array &ref){
            delete [] array;
            n = ref.n;
            array = new T[n]();
            for (size_t i = 0; i < n; i++)
                array[i] = ref.array[i];
            return (*this);
        };
        T &operator[](size_t index) const {
            if (index >= n || index < 0)
                throw (OutOfRange());
            return (array[index]);
        };
        size_t size(void) const {
            return (n);
        };
        class OutOfRange : public std::exception
        {
            public:
            const char *what() const throw() {
                return ("error: access out of range!!");
            };
        };
        ~Array(){
            delete [] array;
        };
};

#endif