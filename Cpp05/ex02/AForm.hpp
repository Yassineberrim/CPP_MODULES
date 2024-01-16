
#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm{
    private:
        const std::string name;
        bool signedForm;
        const int gradeToSign;
        const int gradeToExecute;
        AForm();
    public:
        AForm(std::string const name, int gradeToSign, int gradeToExecute);
        AForm(const AForm &src);
        virtual ~AForm();
        AForm &operator=(const AForm &rhs);
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
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm const &form);