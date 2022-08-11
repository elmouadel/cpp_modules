/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:57:53 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/10 09:42:17 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.h"

int main(void)
{
	{
        char        c[5] = "leet";
        int         n[5] = {13, 37, 42, 1337, 133742};
        std::string s[5] = {"Lorem", "ipsum", "dolor", "sit", "amet"};
        
        Array<char>        C(5);
        Array<int>         N(5);
        Array<std::string> S(5);

        for (size_t i = 0; i < 5; i++)
            C[i] = c[i];
        for (size_t i = 0; i < 5; i++)
            N[i] = n[i];
        for (size_t i = 0; i < 5; i++)
            S[i] = s[i];
        for (size_t i = 0; i < 5; i++)
        {
            if (C[i] != c[i])
                std::cout << "no matching!\n";
        }
        for (size_t i = 0; i < 5; i++)
        {
            if (N[i] != n[i])
                std::cout << "no matching!\n";
        }
        for (size_t i = 0; i < 5; i++)
        {
            if (S[i] != s[i])
                std::cout << "no matching!\n";
        }
        std::cout << "ok all\n\n";
    }
	system("leaks array");
	return (0);
}