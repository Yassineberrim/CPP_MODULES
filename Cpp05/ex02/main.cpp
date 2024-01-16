#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat b1("Haj outmani",1);
    ShrubberyCreationForm shrubbery("home");
    shrubbery.execute(b1);
    // RobotomyRequestForm robotomy("home");
    // PresidentialPardonForm pardon("home");

    return 0;
}

