/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:02:12 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/04 20:04:14 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

# include <iostream>
# include <iomanip>
# include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &animal);
        Animal &operator = (const Animal &animal);
        virtual std::string getType(void) const;
        virtual void makeSound(void) const = 0;
        virtual ~Animal();
};

#endif