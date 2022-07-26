/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:54:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 11:10:48 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "HumanB.h"

int main() 
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    } 
    {
        Weapon club = Weapon("crude spiked club");
        Weapon dd = Weapon("crude spiked dd");
        HumanB jim("Jim");
        
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
        club.setType("some other type of club");
    
    }
    
    // Weapon w("null");
    // std::string const &sw = w.getType();
    
    
    // w.type = "llun";
    // std::cout <<  &w.type << " vs " << &sw <<std::endl;
    // std::cout <<  w.type << " vs " << sw <<std::endl;
    return 0;
}