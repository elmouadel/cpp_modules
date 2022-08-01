/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:30:54 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 17:16:10 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
# define DIAMONDTRAP

# include "ScavTrap.h"
# include "FragTrap.h"
# include <iostream>
# include <iomanip>
# include <string>

class DiamondTrap : public ScavTrap , public FragTrap
{
    std::string name;
    using FragTrap::hitPoint;
    using ScavTrap::energy;
    using FragTrap::attDamage;
    
    public:
        using ScavTrap::attack;
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &diamondtrap);
        DiamondTrap &operator = (const DiamondTrap &diamondtrap);
        void whoAmI(void);
        ~DiamondTrap();
};

#endif