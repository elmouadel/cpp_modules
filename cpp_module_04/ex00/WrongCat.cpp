/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:02:42 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 19:05:48 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat()
{
    std::cout << "WrongCat" << " default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
    *this = wrongcat;
}

WrongCat &WrongCat::operator = (const WrongCat &wrongcat)
{
    if (this == &wrongcat)
        return (*this);
    
    return (*this);
}

std::string WrongCat::getType(void) const
{
    return (type);
}

void WrongCat::makeSound(void) const
{
    std::cout << "myyyyyyyyaw" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat" << " default destructor called." << std::endl;
}
