/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:10:00 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/24 11:17:47 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie  *newZombie(std::string name)
{
    Zombie *zom = new Zombie;
    
    if (!zom)
        return (NULL);
    zom->setName(name);
    return (zom);
}