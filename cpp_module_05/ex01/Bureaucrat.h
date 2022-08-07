/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:56:12 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 10:54:33 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <exception>
# include "Form.h"

class Form;

class Bureaucrat
{
    const std::string   name;
    int                 grade; 
    
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat &operator = (const Bureaucrat &bureaucrat);
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();  
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();  
        };
        void signForm(Form &form);
        ~Bureaucrat();
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &bureaucrat);
        
#endif