#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(Intern const & src) {
    *this = src;
}

Intern::~Intern() {

}

Intern & Intern::operator=(Intern const & src) {
    if (this != &src)
    {
        *this = src;
    }
    return *this;
}

Intern::Intern() {
}

AForm* Intern::makeForm(std::string nameform, std::string target)
{
    AForm *form;
    form = NULL;
    if (nameform == "robotomy request")
    {
        form = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << nameform << std::endl;
    }
    else if (nameform == "shrubbery creation")
    {
        form = new ShrubberyCreationForm(target);
        std::cout << "Intern creates " << nameform << std::endl;
    }
    else if (nameform == "presidential pardon")
    {
        form = new PresidentialPardonForm(target);
        std::cout << "Intern creates " << nameform << std::endl;
    }
    else
    {
        std::cout << "Intern can't create " << nameform << std::endl;
    }
    return form;
}