/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:16:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/10 11:38:25 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

# include <iostream>
# include <iomanip>
# include <string>

template<typename T> int easyfind(T &cont, int tof)
{
    for (typename T::iterator it = cont.begin() ; it != cont.end(); it++)
        if (*it == tof)
            return(0);
    return (1);
}

#endif