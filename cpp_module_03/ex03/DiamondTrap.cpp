/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:37:31 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 16:56:06 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiammoundTrap default constructor called." << std::endl;    
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)

{
    std::cout << "DiammoundTrap constructor called." << std::endl;
    this->name = name;
    ClapTrap::name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
    *this = diamondtrap;
    std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &diamondtrap)
{
    if (this == &diamondtrap)
        return (*this);
    ClapTrap::name = diamondtrap.ClapTrap::name;
    name = diamondtrap.name;
    hitPoint = diamondtrap.hitPoint;
    energy = diamondtrap.energy;
    attDamage = diamondtrap.attDamage;
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is: " << name << " and my Claptrap name is: " << ClapTrap::name <<std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiammoundTrap default deconstructor called." << std::endl;    
}