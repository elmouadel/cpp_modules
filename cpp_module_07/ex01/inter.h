/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:35:50 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 18:53:45 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_H
#define INTER_H

# include <iostream>
# include <string>

template<typename T> void inter (T *ptr, size_t length, void (*f)(T))
{
    for (size_t i = 0; i < length; i++)
        f(ptr[i]);
}

template<typename T> void putElem(T e)
{
    std::cout << e  << " ";
}

#endif 
