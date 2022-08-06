/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 10:35:56 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/05 10:53:06 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

# include <iostream>
# include <iomanip>
# include <string>
# include "AMateria.h"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &ice);
        Ice &operator = (const Ice &ice);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
        ~Ice();
};

#endif