
#pragma once

#include <iostream>

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

