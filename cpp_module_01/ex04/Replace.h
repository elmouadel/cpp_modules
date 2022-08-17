/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:21:19 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/16 18:34:47 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

class Replace
{
    std::string fileName;
    std::string s1;
    std::string s2;
    public:
        Replace(const std::string &file, const std::string &s1, const std::string &s2);
        void replace();
        ~Replace();
};

#endif