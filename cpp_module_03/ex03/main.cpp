/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:13:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 21:07:09 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main(void) {

	DiamondTrap thor("thor");
	DiamondTrap odin("odin");
	std::cout << odin.getEnergy() <<"\n";

	odin.attack("thor");
	odin.beRepaired(2);
	odin.takeDamage(3);
	thor.whoAmI();
	return 0;
}