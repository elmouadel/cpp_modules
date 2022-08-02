/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:02:18 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 20:25:58 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
    std::cout << "Brain" << " default constructor called." << std::endl;
    ideas = new std::string[100];
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
}

Brain &Brain::operator = (const Brain &brain)
{
    if (this == &brain)
        return (*this);
    
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain" << " default destructor called." << std::endl;
    delete [] ideas;
}
