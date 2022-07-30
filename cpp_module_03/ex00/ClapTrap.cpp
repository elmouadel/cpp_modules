/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:43:40 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/29 17:50:12 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) : name(name) , hitPoint(10), energy(10), attDamage(0)
{
    std::cout << "ClapTrap default construct called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
    std::cout << "ClapTrap copy construct called." << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &claptrap)
{
    if (this == &claptrap)
        return (*this);
    name = claptrap.name;
    hitPoint = claptrap.hitPoint;
    energy = claptrap.energy;
    attDamage = claptrap.attDamage;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << name << " attacks " << target <<  ", causing " << hitPoint << " points of damage!" << std::endl;
    energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " repaired by " << amount << " points of damage!" << std::endl;
    energy--;
}