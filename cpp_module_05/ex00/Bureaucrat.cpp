/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:56:09 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 20:06:30 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : grade(0) , name("unknown")
{
    std::cout << "Bureaucrat" << " default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, size_t grade) : grade(grade) , name(name)
{
    std::cout << "Bureaucrat" << " default constructor called." << std::endl;
    if (grade < 1)
		throw GradeTooHighException();

	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : grade(bureaucrat.grade) , name(bureaucrat.name)
{
    std::cout << "Bureaucrat" << " copy constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &bureaucrat)
{
    if (this == &bureaucrat)
        return (*this);
    grade = bureaucrat.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat" << " default destructor called." << std::endl;
}
