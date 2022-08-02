/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:58:10 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 21:06:31 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : type("Dog")
{
    std::cout << "Dog" << " default constructor called." << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
}

Dog &Dog::operator = (const Dog &dog)
{
    if (this == &dog)
        return (*this);
    Brain *holBrain;

    type = dog.type;
    holBrain = brain;
    brain = new Brain(*dog.brain);
    delete holBrain;
    return (*this);
}

std::string Dog::getType(void) const
{
    return (type);
}

void Dog::makeSound(void) const
{
    std::cout << "haw haw haw" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog" << " default destructor called." << std::endl;
    delete brain;
}
