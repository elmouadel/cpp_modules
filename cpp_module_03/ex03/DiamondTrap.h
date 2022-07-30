/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:30:54 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/30 21:42:00 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap
# define DiamondTrap

# include "ScavTrap.h"
# include "FragTrap.h"
# include <iostream>
# include <iomanip>
# include <string>

class DiamondTrap : public ScavTrap , public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &diamondtrap);
        DiamondTrap &operator = (const DiamondTrap &diamondtrap);
        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif