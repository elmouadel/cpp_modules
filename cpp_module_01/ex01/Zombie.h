/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:55:13 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/24 11:11:41 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE

# include <iostream>
# include <iomanip>
# include <string>

# define NZOM 11

class Zombie
{
    std::string name;
    
    public:
        Zombie();
        Zombie(std::string name);
        void announce(void);
        void setName(std::string name);
        std::string getName();
        ~Zombie();
};

Zombie*    zombieHorde(int N, std::string name);

#endif