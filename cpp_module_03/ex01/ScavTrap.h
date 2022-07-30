/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:30:54 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/30 20:30:10 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.h"
# include <iostream>
# include <iomanip>
# include <string>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &scavtrap);
        ScavTrap &operator = (const ScavTrap &scavtrap);
        void attack(const std::string &target);
        void guardGate();
};

#endif