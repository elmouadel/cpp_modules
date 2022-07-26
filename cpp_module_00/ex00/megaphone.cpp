/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:22:00 by eabdelha          #+#    #+#             */
/*   Updated: 2022/06/23 16:40:17 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int i = 1; i < ac; i++)
        {
            std::string str(av[i]);
            for(int j = 0; j < str.length(); j++)
                std::cout << (char)std::toupper(str[j]);
        }
    }
    std::cout << std::endl;
    return (0);
}