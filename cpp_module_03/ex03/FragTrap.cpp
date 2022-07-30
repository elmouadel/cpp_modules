/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:26:29 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/30 20:34:42 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    hitPoint = 100;
    energy = 100;
    attDamage = 30;
    std::cout << "FragTrap constructor called for: " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
    *this = fragtrap;
    std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &fragtrap)
{
    if (this == &fragtrap)
        return (*this);
    name = fragtrap.name;
    hitPoint = fragtrap.hitPoint;
    energy = fragtrap.energy;
    attDamage = fragtrap.attDamage;
    return (*this);
}

void FragTrap::attack(const std::string &target)
{
    if (!energy)
        std::cout << "FragTrap " << name << " is out of energy!." << std::endl;
    else
    {
        std::cout << "FragTrap " << name << " attacks " << target <<  ", causing " << attDamage << " points of damage!" << std::endl;
        energy--;
    }
}

void FragTrap::highFivesGuys(void)
{
	std::cout << name << " is now in Gate keeper mode." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap deconstructor is called for: " << name << std::endl;
}
