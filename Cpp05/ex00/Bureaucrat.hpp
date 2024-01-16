/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:46:29 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/16 18:35:17 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        Bureaucrat();
        const std::string	name;
        int grade;
    public:
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &rhs);
        std::string const getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char *what() const throw();
        };
        
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);