/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:08:32 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 19:51:01 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

# include <iostream>
# include <iomanip>
# include <string>
# include "WrongAnimal.h"


class WrongCat : public WrongAnimal
{
    std::string type;

    public:
        WrongCat();
        WrongCat(const WrongCat &wrongcat);
        WrongCat &operator = (const WrongCat &wrongcat);
        std::string getType(void) const;
        void makeSound(void) const;
        ~WrongCat();
};

#endif