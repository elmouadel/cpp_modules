/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:40:12 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 18:54:10 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inter.h"

int main(void)
{
    char        c[5] = "leet";
    int         n[5] = {13, 37, 42, 1337, 133742};
    std::string s[5] = {"Lorem", "ipsum", "dolor", "sit", "amet"};

    inter(c, 5, putElem);
    std::cout << std::endl;
    inter(n, 5, putElem);
    std::cout << std::endl;
    inter(s, 5, putElem);
    std::cout << std::endl;
    return (0);
}