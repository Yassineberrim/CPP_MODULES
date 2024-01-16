#pragma once

#include <iostream>

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};
