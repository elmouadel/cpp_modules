/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:30:54 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/29 17:02:37 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP

# include <iostream>
# include <iomanip>
# include <string>

class ClapTrap
{
    std::string name;
    size_t      hitPoint;
    size_t      energy;
    size_t      attDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptarp);
        ClapTrap &operator = (const ClapTrap &claptrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);    
};

#endif