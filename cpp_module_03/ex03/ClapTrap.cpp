/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:43:40 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 18:34:05 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) , hitPoint(10), energy(10), attDamage(0)
{
    std::cout << "ClapTrap constructor called for: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
    std::cout << "ClapTrap copy constructor called." << std::endl;
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
    if (!energy)
        std::cout << "ClapTrap " << name << " is out of energy!." << std::endl;
    else
    {
        std::cout << "ClapTrap " << name << " attacks " << target <<  ", causing " << attDamage << " points of damage!" << std::endl;
        energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (amount > hitPoint)
        hitPoint = 0;
    else
        hitPoint -= amount;    
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (!energy)
        std::cout << "ClapTrap " << name << " is out of energy!." << std::endl;
    else
    {
	    std::cout << "ClapTrap " << name << " repaired by " << amount << " points of damage!" << std::endl;
        energy--;
    }
}

std::string ClapTrap::getName(void) const
{
    return (name);
}

size_t ClapTrap::getHitPoint(void) const
{
    return (hitPoint);
}
size_t ClapTrap::getEnergy(void) const
{
    return (energy);
}
size_t ClapTrap::getAttDamage(void) const
{
    return (attDamage);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoint(size_t amount)
{
    hitPoint = amount;
}

void ClapTrap::setEnergy(size_t amount)
{
    energy = amount;
}

void ClapTrap::setAttDamage(size_t amount)
{
    attDamage = amount;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap deconstructor is called for: " << name << std::endl;
}
