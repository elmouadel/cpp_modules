/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:00:09 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/23 17:00:20 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

# include <iostream>
# include <string>
# include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Form;

class Intern
{
    public:
        Intern();
        Intern(const Intern &intern);
        Intern &operator = (const Intern &intern);
        Form *makeForm(std::string form, std::string target);
        class FormArgException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        ~Intern();
};

#endif