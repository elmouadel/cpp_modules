/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:11:57 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 10:41:09 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

# include <iostream>
# include <iomanip>
# include <string>

typedef class Harl Harl;

typedef struct sLevel
{
    std::string strLevel;
    void        (Harl::*funLevel)(void);
}   tLevel;

class Harl
{
    enum level {DEBUG, INFO, WARNING, ERROR};
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    tLevel  levels[4];
    public:
        Harl();
        void    complain(int indexLevel);
        void    halFilter(std::string inputLevel);
};

#endif