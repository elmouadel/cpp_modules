/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:54:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/25 17:52:29 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie stackZom ("etern");
    Zombie *heapZom = nullptr;
    
    stackZom.announce();
    heapZom = newZombie("hopyo");
    if (!heapZom)
        return (NULL);
    heapZom->announce();
    delete heapZom;
    randomChump("crisan");
    return (0);
}