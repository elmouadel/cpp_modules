/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:30:54 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/30 19:01:10 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP

# include <iostream>
# include <iomanip>
# include <string>

class ClapTrap
{
    protected:   
        std::string name;
        size_t      hitPoint;
        size_t      energy;
        size_t      attDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptarp);
        ClapTrap &operator = (const ClapTrap &claptrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const; 
        size_t getHitPoint(void) const; 
        size_t getEnergy(void) const; 
        size_t getAttDamage(void) const;
        void setName(std::string name); 
        void setHitPoint(size_t amount); 
        void setEnergy(size_t amount); 
        void setAttDamage(size_t amount); 
        ~ClapTrap();
};

#endif