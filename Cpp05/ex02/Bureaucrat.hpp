
#pragma once

#include <iostream>
#include <string>
class AForm;
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
        void executeForm(AForm const & form);
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