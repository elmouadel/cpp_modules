/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:55:46 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/21 10:26:50 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void check_operation(std::string operation, PhoneBook *phonebook)
{
    if (!operation.compare("ADD"))
        phonebook->AddContact();
    else if (!operation.compare("SEARCH"))
        phonebook->DisplayContact();
    else if (!operation.compare("EXIT"))
        exit(0);
}

int main(void)
{
    PhoneBook phonebook;
    std::string operation;
    
    while (true)
    {
        std::cout << "\rPhoneBook=> ";
        if (!std::getline(std::cin, operation))
            break;
        check_operation(operation, &phonebook);
    }
}