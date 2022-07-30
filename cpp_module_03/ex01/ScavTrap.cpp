/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:26:29 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/30 20:13:35 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    hitPoint = 100;
    energy = 50;
    attDamage = 20;
    std::cout << "ScavTrap constructor called for: " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
    *this = scavtrap;
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavtrap)
{
    if (this == &scavtrap)
        return (*this);
    name = scavtrap.name;
    hitPoint = scavtrap.hitPoint;
    energy = scavtrap.energy;
    attDamage = scavtrap.attDamage;
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (!energy)
        std::cout << "ScavTrap " << name << " is out of energy!." << std::endl;
    else
    {
        std::cout << "ScavTrap " << name << " attacks " << target <<  ", causing " << attDamage << " points of damage!" << std::endl;
        energy--;
    }
}

void ScavTrap::guardGate()
{
	std::cout << name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap deconstructor is called for: " << name << std::endl;
}
