/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:56:23 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/21 19:13:11 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void    Contact::FillInformations()
{
    std::cout << "$FirstName: ";
    if(!std::getline(std::cin, FirstName))
        exit(1);
    std::cout << "$LastName: ";
    if(!std::getline(std::cin, LastName))
        exit(1);
    std::cout << "$NickName: ";
    if(!std::getline(std::cin, NickName))
        exit(1);
    std::cout << "$PhoneNumber: ";
    if(!std::getline(std::cin, PhoneNumber))
        exit(1);
    std::cout << "$DarkestSecret: ";
    if(!std::getline(std::cin, DarkestSecret))
        exit(1);
}
void PrintString(std::string str)
{
    if (str.length() > 10)
        std::cout << "|"  << str.substr(0, 9) << ".";
    else
        std::cout << "|"  << std::setw(10) << str;
}

void Contact::DisplayList(int index)
{
    std::cout << "|" << std::setw(10) << index;
    PrintString(FirstName);
    PrintString(LastName);
    PrintString(NickName);
    std::cout << "|"  << std::endl;
}

void Contact::DisplayInformations()
{
    std::cout << "$FirstName: " << FirstName << std::endl;
    std::cout << "$LastName: " << LastName << std::endl;
    std::cout << "$NickName: " << NickName << std::endl;
    std::cout << "$PhoneNumber: " << PhoneNumber << std::endl;
    std::cout << "$DarkestSecret: " << DarkestSecret << std::endl;
}

 bool Contact::CheckEmptyContact()
 {
    if (FirstName.empty() && LastName.empty() && NickName.empty() 
    && NickName.empty() && PhoneNumber.empty() && DarkestSecret.empty())
        return (0);
    return (1);
 }