/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:37:13 by yberrim           #+#    #+#             */
/*   Updated: 2024/01/15 15:44:50 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form{
    private:
        const std::string name;
        bool signedForm;
        const int gradeToSign;
        const int gradeToExecute;
        Form();
    public:
        Form(std::string const name, int gradeToSign, int gradeToExecute);
        Form(const Form &src);
        ~Form();
        Form &operator=(const Form &rhs);
        std::string const getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(Bureaucrat &bureaucrat);
        class GradeTooHighException : public std::exception {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
                virtual const char *what() const throw();
        };
        class FormAlreadySigned : public std::exception {
                virtual const char *what() const throw();
        };
        class FormNotSigned : public std::exception {
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Form const &form);