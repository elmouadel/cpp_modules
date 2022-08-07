/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:00:07 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 21:13:43 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"

Intern::Intern()
{
    std::cout << "Intern" << " default constructor called." << std::endl;
}


Intern::Intern(const Intern &intern)
{
    std::cout << "Intern" << " default constructor called." << std::endl;
    (void)intern;
}

Intern &Intern::operator = (const Intern &intern)
{
    (void)intern;
    return (*this);
}

Form *Intern::makeForm(std::string form, std::string target)
{
    std::string strsForms[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    
    size_t i;
    for (i = 0; i < 3; i++)
        if (strsForms[i] == form)
            break;
    switch (i)
    {
        case 0:
            return (new ShrubberyCreationForm(target));
        case 1:
            return (new RobotomyRequestForm(target));
        case 2:
            return (new PresidentialPardonForm(target));
        default:
           throw FormArgException();
    }
}

const char *Intern::FormArgException::what() const throw()
{
    return("the form name passed as parameter doesn't exist");
}

Intern::~Intern()
{
    std::cout << "Intern" << " default destructor called." << std::endl;
}
