/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:05:03 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 15:57:29 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : Form("PardonForm", 25, 5) , target("pardon")
{
    std::cout << "PresidentialPardonForm" << " default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
    Form("PardonForm", 25, 5) , target(target)
{
    std::cout << "PresidentialPardonForm" << " default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform) :
    Form("PardonForm", 25, 5) , target(presidentialpardonform.target)
{
    std::cout << "PresidentialPardonForm" << " copy constructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &presidentialpardonform)
{
    if (this == &presidentialpardonform)
        return (*this);
    target = presidentialpardonform.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToExec())
        throw(GradeTooLowException());
    if (!getIsSigned())
        throw(FormNotSigned());
    
    std::cout << target << " has been pardoned by Zaphod Beeblebrox!" <<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm" << " default destructor called." << std::endl;
}
