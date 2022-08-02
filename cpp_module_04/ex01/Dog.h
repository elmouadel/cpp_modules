/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:58:21 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 20:17:26 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Animal.h"
# include "Brain.h"


class Dog : public Animal
{
    std::string type;
    Brain *brain;

    public:
        Dog();
        Dog(const Dog &dog);
        Dog &operator = (const Dog &dog);
        std::string getType(void) const;
        void makeSound(void) const;
        ~Dog();
};

#endif