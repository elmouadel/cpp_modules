/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:26:39 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 16:53:11 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALSSES_H
#define CALSSES_H

# include <iostream>
# include <string>
# include <time.h>
# include <cstdlib>

class Base 
{
    public:
        virtual ~Base(){};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};


#endif