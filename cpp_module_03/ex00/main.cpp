/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:13:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/29 17:15:16 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void) {

	ClapTrap thor("thor");
	ClapTrap odin("odin");

	odin.attack("thor");
	odin.beRepaired(2);
	odin.takeDamage(3);

	return 0;
}